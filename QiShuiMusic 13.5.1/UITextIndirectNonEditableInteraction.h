@interface UITextIndirectNonEditableInteraction : UITextIndirectEditableInteraction
@property (nonatomic) UIKeyboardTaskQueue taskQueue;
@property (nonatomic) _UIKeyboardTextSelectionController textSelectionController;
@property (nonatomic) double timestampOfLastTouchesEnded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithView:;
- (void)finishSetup;
- (void)dealloc;
- (id)textSelectionController;
- (void)willBeginGesture;
- (void)didEndGesture;
- (void).cxx_destruct;
- (id)taskQueue;
- (void)_setupControllersIfNecessaryWithView:;
- (BOOL)shouldAllowSelectionGestures:atPoint:toBegin:;
- (BOOL)shouldAllowWithTouchTypes:atPoint:toBegin:;
@end
