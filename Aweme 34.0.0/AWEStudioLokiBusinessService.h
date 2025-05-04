@interface AWEStudioLokiBusinessService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchEffectResourceWithPanel:category:cacheValid:completion:;
- (id)resourceReadyEffectModelWithPanel:category:;
- (void)fetchEffectResourceWithEffect:completion:;
- (void)fetchEffectModelWithPanel:category:completion:;
- (id)cachedEffectModelWithPanel:category:;
@end
