@interface UIPreviewInteraction : NSObject
@property (nonatomic) <_UIPreviewInteractionTouchForceProviding> touchForceProvider;
@property (nonatomic) UIView view;
@property (nonatomic) <UIPreviewInteractionDelegate> delegate;
- (id)initWithView:;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (id)initClickBasedImplementationWithView:;
@end
