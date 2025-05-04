@interface AWEMediaDownloadBaseStage : NSObject
@property (nonatomic) AWEMediaDownloadConfig config;
@property (nonatomic) <AWEMediaDownloadStageDelegate> delegate;
@property (nonatomic) AWEMediaDownloadResultInnerItem item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)finishThenContinue;
- (void)cancelThenContinue;
- (void)failedThenContinueWithError:;
- (void)prepareWithConfig:;
- (long long)progressUnitCount;
- (void)doneThenContinue;
- (void)setConfig:;
- (void)run;
- (id)delegate;
- (id)config;
- (void)setItem:;
- (void)finishWithResult:error:;
- (id)item;
- (void).cxx_destruct;
- (void)setDelegate:;
- (BOOL)shouldRun;
- (void)willRun;
+ (id)stageWithConfig:;
@end
