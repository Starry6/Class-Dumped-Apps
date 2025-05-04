@interface AWESharePOIGoodsTask : AWEShareCommonTask
- (void)prepareWithChannel:inView:;
- (id)aAWESharePrepareURLStageCommonAdapter;
- (BOOL)doesPlatformSupportsImageSharing:;
+ (id)taskWithWebModel:;
+ (Class)aAWESharePrepareURLStageCommonAdapterClass;
+ (id)contextWithWebModel:;
+ (id)statsShareWebStage;
+ (id)prepareShareWebModelStage;
@end
