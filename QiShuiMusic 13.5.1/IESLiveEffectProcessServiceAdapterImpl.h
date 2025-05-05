@interface IESLiveEffectProcessServiceAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) <IESLiveSaaSVideoEffectProcessing> effectProcessing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)applyEffectKey:image:scene:;
- (void)applyEffectList:enableFakeFace:scene:;
- (id)effectProcessing;
- (void)enableFakeFace:scene:;
- (BOOL)isRendFilterScene:;
- (void)removeEffectList:scene:;
- (void)sendMessage:param1:param2:userInfo:type:scene:;
- (void)setEffectProcessing:;
- (void)setEnableEffect:scene:;
- (void).cxx_destruct;
@end
