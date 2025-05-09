@interface AWEGenericTemplateAIGCTaskManagerBackgroundPlugin : NSObject
@property (nonatomic) NSString templateID;
@property (nonatomic) NSString toast;
@property (nonatomic) NSError error;
@property (nonatomic) NSString requestId;
@property (nonatomic) NSArray result;
@property (nonatomic) NPPreprocessAIGCCallback_OC callback;
@property (nonatomic) AWEGenericTemplateAIGCMergedRequestInfo mergedRequestInfo;
@property (nonatomic) <AWEGenericTemplateAIGCTaskManagerBackgroundPluginDelegate> delegate;
@property (nonatomic) BOOL needDelay;
- (void)resumeTask;
- (void)setMergedRequestInfo:;
- (id)mergedRequestInfo;
- (BOOL)needDelay;
- (void)appendBackgroundTaskWithTemplateID:mergedRequestInfo:toast:error:;
- (void)appendBackgroundTaskWithRequestId:templateId:result:toast:error:callback:;
- (void)setNeedDelay:;
- (void)setCallback:;
- (id)callback;
- (void)setResult:;
- (id)delegate;
- (void)setError:;
- (id)templateID;
- (void)setTemplateID:;
- (void).cxx_destruct;
- (id)error;
- (void)setRequestId:;
- (void)reset;
- (void)setDelegate:;
- (id)requestId;
- (id)result;
- (void)setToast:;
- (id)toast;
@end
