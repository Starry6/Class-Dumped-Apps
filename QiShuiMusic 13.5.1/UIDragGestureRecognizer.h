@interface UIDragGestureRecognizer : UIGestureRecognizer
@property (nonatomic) UIDragEvent dragEvent;
@property (nonatomic) <UIDragGestureRecognizerDelegate> delegate;
@property (nonatomic) _UIInternalDraggingSessionDestination sessionDestination;
@property (nonatomic) _UIDropSessionImpl dropSession;
- (BOOL)shouldReceiveEvent:;
- (BOOL)canBePreventedByGestureRecognizer:;
- (BOOL)_shouldReceivePress:;
- (BOOL)canPreventGestureRecognizer:;
- (id)dropSession;
- (BOOL)_shouldReceiveTouch:forEvent:recognizerView:;
- (id)sessionDestination;
- (id)locationInView:;
- (void).cxx_destruct;
- (id)_dragEvent;
- (id)initWithTarget:action:;
@end
