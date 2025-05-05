@interface UIMutableTransformer : UITransformer
@property (nonatomic) <UIMutableTransformerDelegate> _delegate;
- (id)_delegate;
- (void)_setDelegate:;
- (void)removeAll;
- (void)_updateTransform;
- (void)addTransform:reason:;
- (void)replaceTransform:withTransform:reason:;
- (void)removeTransform:;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:;
- (void)_ensureTransformsStructuresExists;
- (id)copyWithZone:;
@end
