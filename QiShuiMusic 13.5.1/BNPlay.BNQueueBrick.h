@interface BNPlay.BNQueueBrick : BNPlay.BNBaseQueueBrick
- (id)dragger:cellForRowAt:;
- (void)dragger:didBeginDraggingAt:;
- (void)dragger:didEndDraggingAt:;
- (void)dragger:dragging:;
- (BOOL)dragger:moveDraggingAt:newIndexPath:;
- (BOOL)dragger:shouldBegan:;
- (BOOL)tableView:canEditRowAtIndexPath:;
- (void).cxx_destruct;
@end
