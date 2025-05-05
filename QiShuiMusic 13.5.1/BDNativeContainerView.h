@interface BDNativeContainerView : UIView
@property (nonatomic) @? nativeRemoveAction;
- (void)configNativeContainerBeRemovedAction:;
- (id)nativeRemoveAction;
- (void)setNativeRemoveAction:;
- (void)removeFromSuperview;
- (id)init;
- (void)dealloc;
- (void)setFrame:;
- (void).cxx_destruct;
@end
