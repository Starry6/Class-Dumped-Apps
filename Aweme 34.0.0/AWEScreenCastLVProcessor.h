@interface AWEScreenCastLVProcessor : NSObject
@property (nonatomic) TTVideoEngineInfoFetcher infoFetcher;
@property (nonatomic) @? completion;
@property (nonatomic) @? feedCompletion;
@property (nonatomic) NSString currentFetchID;
@property (nonatomic) TTVideoEngineModel engineModel;
@property (nonatomic) AWEScreenCastVideoInfo videoInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEScreenCastProcessorDelegate> delegate;
- (id)videoInfo;
- (void)setVideoInfo:;
- (void)setInfoFetcher:;
- (id)infoFetcher;
- (void)infoFetcherDidFinish:;
- (void)infoFetcherDidFinish:error:;
- (void)infoFetcherShouldRetry:;
- (void)infoFetcherDidCancel;
- (void)infoFetcherFinishWithDNSError:;
- (void)setEngineModel:;
- (id)engineModel;
- (BOOL)canContinuePlay;
- (id)currentFetchID;
- (void)prefetchPlayItemWithModel:;
- (void)setCurrentFetchID:;
- (void)fetchPlayItemWithModel:withCompletion:;
- (id)filterUnSupportedModelsWith:;
- (id)v2VideoApiURL;
- (id)videoURLV2ApiWithPlayAuthToken:;
- (BOOL)checkCanUseCurrentEngineModelWith:;
- (id)makePlayInfoWithEngineModel:model:;
- (id)makePlayItemWithPlayInfo:model:;
- (void)setFeedCompletion:;
- (void)fetchPlayItemViaTTWithModel:withCompletion:;
- (void)fetchPlayItemViaAwemeWithModel:withCompletion:;
- (void)fetchEngineModelWithModel:withCompletion:;
- (BOOL)supportPreRedirect;
- (void)prefetchEngineModelWithModel:;
- (id)feedCompletion;
- (void)fetchVideoInfoWithModel:withCompletion:;
- (void)fetchWithPlayAuthToken:;
- (id)makePlayInfoWithVideoInfo:model:;
- (id)delegate;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
