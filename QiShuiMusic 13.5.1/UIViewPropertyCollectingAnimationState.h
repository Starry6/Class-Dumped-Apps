@interface UIViewPropertyCollectingAnimationState : UIViewInProcessAnimationState
@property (nonatomic) _UICompoundObjectMap capturedProperties;
- (id)init;
- (void)setCapturedProperties:;
- (id)capturedProperties;
- (void).cxx_destruct;
- (id)actionForLayer:forKey:forView:;
@end
