@interface TableViewDragger.TableViewDragger : NSObject
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)longPressGestureAction:;
- (void)panGestureAction:;
- (void)displayDidRefresh:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
