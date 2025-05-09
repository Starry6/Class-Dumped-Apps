@interface AWECutSameRouterManager : NSObject
@property (nonatomic) LVExporterManager lvExportManager;
@property (nonatomic) NLEInterface_OC nle;
@property (nonatomic) UIView<ACCLoadingViewProtocol> loadingView;
@property (nonatomic) UIView<ACCProcessViewProtcol> progressView;
@property (nonatomic) BOOL isCancel;
@property (nonatomic) <ACCCutSameWorksManagerProtocol> worksManager;
@property (nonatomic) LVPlayer player;
@property (nonatomic) @? cutSameMVVideoProgressBlock;
@property (nonatomic) @? cutSameMVVideoCompletion;
@property (nonatomic) NSTimer timer;
@property (nonatomic) double count;
- (id)nle;
- (void)resetManager;
- (void)setNle:;
- (void)fakeProgress;
- (void)cancelCreateCutSameMVVideo;
- (void)setCutSameMVVideoCompletion:;
- (void)setCutSameMVVideoProgressBlock:;
- (void)handleCutSameMVVideoProgressBlock:;
- (void)handleCutSameMVVideoCompletionWithPublishModel:success:error:;
- (void)startCutSameMVVideoWithTemplate:assetPathList:withInfo:progressBlock:completion:;
- (id)convertAssetPathToAssetModel:;
- (BOOL)validDuration:assetModels:;
- (void)setLvExportManager:;
- (id)lvExportManager;
- (void)setWorksManager:;
- (id)worksManager;
- (id)cutSameMVVideoProgressBlock;
- (id)cutSameMVVideoCompletion;
- (void)createCutSameMVTemplateWithTemplateId:withInfo:completion:;
- (void)createCutSameMVVideoWithTemplateId:assetPathList:withInfo:progressBlock:completion:;
- (void)setTimer:;
- (id)timer;
- (void)setCount:;
- (id)progressView;
- (void)setLoadingView:;
- (double)count;
- (id)loadingView;
- (void)setProgressView:;
- (id)player;
- (void)setPlayer:;
- (void).cxx_destruct;
- (BOOL)isCancel;
- (void)setIsCancel:;
- (id)fileURLWithString:;
+ (id)errorWithResponse:;
+ (id)sharedInstance;
@end
