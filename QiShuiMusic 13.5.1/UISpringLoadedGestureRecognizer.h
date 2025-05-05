@interface UISpringLoadedGestureRecognizer : UIDragGestureRecognizer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldReceiveEvent:;
- (void)spring;
- (BOOL)canBePreventedByGestureRecognizer:;
- (BOOL)canPreventGestureRecognizer:;
- (void)_draggingUpdatedWithEvent:;
- (void)_draggingExitedWithEvent:;
- (id)locationInView:;
- (void)_draggingEnteredWithEvent:;
- (void)_draggingEndedWithEvent:;
@end
