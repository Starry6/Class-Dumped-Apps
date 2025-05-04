@interface AWEVideoRouterCutSameService : NSObject
@property (nonatomic) ACCPicTemplateShootEntranceConfigHelper shootEntranceConfig;
@property (nonatomic) AWEUITransitionHost transitionHost;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createCutSameMVTemplateWithTemplateId:withInfo:repoMissionModel:challangeModel:commercialAnchorModel:;
- (id)startCutSameMVVideoWithTemplate:withInfo:;
- (id)createCutSameMVVideoWithTemplateId:assetPathList:withInfo:;
- (id)createCutSameMVTemplateWithTemplateId:withInfo:;
- (id)shootEntranceConfig;
- (id)transitionHost;
- (void)setTransitionHost:;
- (void)setShootEntranceConfig:;
- (id)startCutSameMVVideoWithTemplate:withInfo:sourceInfo:;
- (id)createCutSameMVTemplateWithTemplateId:withInfo:repoMissionModel:challangeModel:;
- (void)cancelCreateCutSameMVVideo;
- (id)aAWEStudioDouyinLiteAdapter;
- (void)p_createCutsameWithServerExecutionAlertIfNeedWithTemplateModel:withInfo:sourceInfo:completion:;
- (void)p_configPublishModel:externalInfo:;
- (id)p_genRepoPOIFromInfoDic:;
- (void)p_createCutSameMVTemplateWithTemplate:publishModel:info:completion:;
- (void)trackShootWithPublishModel:info:;
- (void)p_presentCutSameImportViewController:withInfo:sourceInfo:completion:;
- (void).cxx_destruct;
+ (Class)aAWEStudioDouyinLiteAdapterClass;
@end
