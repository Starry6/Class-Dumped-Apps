@interface AWEACCTextInputServiceImpl : NSObject
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)beginEditing:enterFrom:;
- (void)commitTracker:;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (void)configWithPublishViewModel:;
- (id)savedHashtags;
- (id)savedPrivateHashtags;
- (void)p_fetchChallengeHistoryWithCompletion:;
- (void)p_searchHashtagWithKeyword:completion:;
- (id)p_searchChallengeParamsWithKeyword:;
- (id)p_interveneHashTagParams;
- (void)fetchHashtagsWithKeyword:completion:;
- (id)creatUserServiceInstance;
- (void)textDidChange:;
- (void).cxx_destruct;
@end
