@interface AWEVideoPublishMusicSelectUserCollectionsReqeustManager : NSObject
@property (nonatomic) BOOL isProcessing;
@property (nonatomic) Q channelID;
@property (nonatomic) Q musicCntPerPage;
@property (nonatomic) Q curr;
@property (nonatomic) BOOL hasMore;
- (void)setIsProcessing:;
- (void)resetRequestParams;
- (unsigned long long)curr;
- (void)fetchCurrPageModelsWithCompletion:;
- (void)setCurr:;
- (unsigned long long)musicCntPerPage;
- (void)setMusicCntPerPage:;
- (id)init;
- (void)setChannelID:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (unsigned long long)channelID;
- (BOOL)isProcessing;
@end
