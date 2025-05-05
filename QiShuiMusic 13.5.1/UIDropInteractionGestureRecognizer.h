@interface UIDropInteractionGestureRecognizer : UIDragGestureRecognizer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canBePreventedByGestureRecognizer:;
- (BOOL)canPreventGestureRecognizer:;
- (void)_draggingUpdatedWithEvent:;
- (void)_draggingExitedWithEvent:;
- (void)_draggingEnteredWithEvent:;
- (void)_draggingEndedWithEvent:;
@end
