@interface WeChatShareUrlCheckTask : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) NSString shareUrl;
@property (nonatomic) WechatShareUrlCheckConfigRecord record;
@property (nonatomic) @? resumeShareBlock;
@property (nonatomic) BOOL hasBeenHandled;
- (void)blockShareTask;
- (void)continueShareTask;
- (BOOL)hasBeenHandled;
- (id)initWithAppID:andShareUrl:resumeShareBlock:;
- (BOOL)isRecordValid:;
- (BOOL)isTaskParamsValid;
- (id)resumeShareBlock;
- (void)setHasBeenHandled:;
- (void)setResumeShareBlock:;
- (void)setShareUrl:;
- (id)shareUrl;
- (id)record;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
- (void)setRecord:;
@end
