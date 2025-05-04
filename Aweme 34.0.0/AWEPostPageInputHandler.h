@interface AWEPostPageInputHandler : NSObject
@property (nonatomic) NSMutableSet extraHashtags;
@property (nonatomic) NSString challengeTitle;
@property (nonatomic) <AWEPostPageInputControllerProtocol> input;
@property (nonatomic) q collectHashtagsSig;
@property (nonatomic) BOOL switchInputButtonSelectedSignal;
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindServices:;
- (id)challengeTitle;
- (void)setChallengeTitle:;
- (void)updateChallengeTitle:;
- (void)addExtraHashtags:;
- (id)allExtraHashtagArray;
- (long long)collectHashtagsSig;
- (void)setCollectHashtagsSig:;
- (BOOL)switchInputButtonSelectedSignal;
- (void)setSwitchInputButtonSelectedSignal:;
- (id)extraHashtags;
- (void)setExtraHashtags:;
- (void)setInput:;
- (id)input;
- (void).cxx_destruct;
- (id)context;
@end
