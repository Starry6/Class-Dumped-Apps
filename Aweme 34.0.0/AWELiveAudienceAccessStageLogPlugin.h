@interface AWELiveAudienceAccessStageLogPlugin : NSObject
@property (nonatomic) AWELiveAudienceAccessContext context;
@property (nonatomic) NSMutableArray stageChain;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commonLogInfo;
- (void)prePullStream;
- (void)stageDidChangedFrom:to:;
- (id)stageChain;
- (id)stringWithStage:;
- (void)setStageChain:;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
