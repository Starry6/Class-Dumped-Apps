@interface UIPencilInteraction : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) <UIPencilInteractionDelegate> delegate;
@property (nonatomic) BOOL enabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)_didMoveFromWindow:toWindow:;
- (void)didMoveToView:;
- (void)willMoveToView:;
- (id)view;
- (id)delegate;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)description;
- (void)setView:;
- (BOOL)isEnabled;
- (void)performDelegateDidTap;
+ (long long)preferredTapAction;
+ (BOOL)prefersPencilOnlyDrawing;
+ (void)_setPrefersPencilOnlyDrawing:;
+ (BOOL)hasSeenPencilPairingUI;
@end
