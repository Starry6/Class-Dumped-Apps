@interface AWEHashTagAutoAppendService : NSObject
@property (nonatomic) <ACCVideoConfigProtocol> config;
@property (nonatomic) NSString defaultTitleFromVideoRouter;
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishModel;
- (void)setPublishModel:;
- (void)updatePublishTitleIfShouldMentionUserAutomatically:;
- (void)updatePublishTitleWithHashTagArray:appendingPublishTitle:;
- (id)defaultTitleFromVideoRouter;
- (void)appendHashTagIfNeededWithAppendPublishTitle:;
- (id)appendingPublishTitle;
- (id)appendingPublishTitleForSelectMusic;
- (void)saveHashTagToTitleExtraInfo;
- (id)generatepublishTitleWithChallengeNames:publishTItle:;
- (void)setDefaultTitleFromVideoRouter:;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
@end
