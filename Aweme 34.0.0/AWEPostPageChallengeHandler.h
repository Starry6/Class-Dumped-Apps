@interface AWEPostPageChallengeHandler : NSObject
@property (nonatomic) BOOL challengeSwitchStatesSignal;
@property (nonatomic) NSString challengeTitleSignal;
@property (nonatomic) NSString hashTagTitleSignal;
@property (nonatomic) q continueWriteHashChooseSignal;
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindServices:;
- (void)sendChallengeSwitchStatesSignal:;
- (void)sendChallengeTitleSignal:;
- (void)sendHashTagTitleSignal:;
- (id)hashTagTitleSignal;
- (void)sendContinueWriteHashChooseSignal:;
- (BOOL)challengeSwitchStatesSignal;
- (id)challengeTitleSignal;
- (void)setChallengeSwitchStatesSignal:;
- (void)setChallengeTitleSignal:;
- (void)setContinueWriteHashChooseSignal:;
- (void)setHashTagTitleSignal:;
- (long long)continueWriteHashChooseSignal;
- (void).cxx_destruct;
- (id)context;
+ (void)_aweLazyRegisterPostPage;
@end
