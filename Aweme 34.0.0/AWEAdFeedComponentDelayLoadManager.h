@interface AWEAdFeedComponentDelayLoadManager : HTSService
@property (nonatomic) AWEAdFeedComponentDelayLoadConfig config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)fetchNAButtonDelayTimeWithModel:;
- (double)fetchLynxButtonDelayTimeWithModel:;
- (void)handleLokiComponentDelayLoadIfNeedWithModel:;
- (void)handleMannorComponentDelayLoadIfNeedWithModel:;
- (BOOL)enableWithModel:;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
@end
