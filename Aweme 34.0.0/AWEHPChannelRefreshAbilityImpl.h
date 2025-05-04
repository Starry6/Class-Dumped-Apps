@interface AWEHPChannelRefreshAbilityImpl : AWEHPChannelBaseAbilityImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)refreshWithModel:completion:;
- (void)removeAllResourcesIfNeedBeforeChannelUnload;
- (void)cancelRefreshWithCompletion:;
@end
