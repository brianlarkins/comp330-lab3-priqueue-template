#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>

#include "priority_queue.h"
#include "util.h"

/**
* get_usec_timestamp - returns current time in microseconds
* @return current time in microseconds
*/
static long get_usec_timestamp() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  return (tv.tv_sec * 1000000L) + tv.tv_usec;
}




/**
 * swap - swaps two heap items
 * @param a first item
 * @param b second item
 */
static void swap(pq_item_t *a, pq_item_t *b) {
  pq_item_t tmp = *a;
  *a = *b;
  *b = tmp;
}



/**
 * heapify_up - restores heap property going up from idx
 * @param heap the heap array
 * @param idx the starting index
 */
static void heapify_up(pq_item_t *heap, int idx) {
  /* implement me */
}



/**
 * heapify_down - restores heap property going down from idx
 * @param heap the heap array
 * @param size the current size of the heap
 * @param idx the starting index
 */
static void heapify_down(pq_item_t *heap, int size, int idx) {
  /* implement me */
}



/**
 * pq_init - initializes the priority queue
 * @param pq the priority queue
 * @param capacity the maximum capacity
 */
void pq_init(priority_queue_t *pq, int capacity) {
  /* implement me */
}



/**
 * pq_destroy - cleans up the priority queue
 * @param pq the priority queue
 */
void pq_destroy(priority_queue_t *pq) {
  /* implement me */
}



/**
 * pq_enqueue - adds an item with priority to the queue
 * @param pq the priority queue
 * @param item the item to add
 * @param priority the priority of the item
 * @param logfile the log file (can be NULL)
 * @param tid the thread id for logging
 */
void pq_enqueue(priority_queue_t *pq, int item, int priority, int tid) {

  /* implement me */

  if (g.logfile) {
    fprintf(g.logfile, "%ld,Producer-%d,enqueue,%d,priority=%d,queue_size=%d\n",
        get_usec_timestamp(), tid, item, priority, pq->size);
    fflush(g.logfile);
  }
}



/**
 * pq_dequeue - removes and returns the highest priority item
 * @param pq the priority queue
 * @param priority_out pointer to store the priority of the dequeued item
 * @param logfile the log file (can be NULL)
 * @param tid the thread id for logging
 * @return the dequeued item
 */
int pq_dequeue(priority_queue_t *pq, int *priority_out, int tid) {
  int item;

  /* implement me */

  if (g.logfile) {
    fprintf(g.logfile, "%ld,Consumer-%d,dequeue,%d,priority=%d,queue_size=%d\n",
        get_usec_timestamp(), tid, item, *priority_out, pq->size);
    fflush(g.logfile);
  }

  return item;
}
