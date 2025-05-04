@interface AWEVideoRouterMVService : NSObject
@property (nonatomic) AWEUITransitionHost transitionHost;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)startMVVideoWithMVID:info:;
- (id)transitionHost;
- (void)setTransitionHost:;
- (id)startVideoWithMVID:inputData:publishModel:info:;
- (id)startMVWithTemplateModel:info:;
- (id)aAWEStudioDouyinLiteAdapter;
- (id)p_genRepoPOIFromInfoDic:;
- (void)p_decomposeInfoWithMVID:effectModel:info:publishModel:;
- (void)p_enterWaterFallStyleMVDetail:publishModel:info:;
- (void)p_enterClassicalMVPhotoSelectVC:publishModel:;
- (void)p_enterClassicalMVPhotoSelectVCWithTemplateModel:isMediaTemplate:publishModel:;
- (void)p_presentSelectPhotoViewController:publishModel:;
- (void)p_presentSelectPhotoViewController:isMediaTemplate:publishModel:;
- (void).cxx_destruct;
+ (Class)aAWEStudioDouyinLiteAdapterClass;
@end
