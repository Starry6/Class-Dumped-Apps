@interface AWEAIMusicRecommendTask : NSObject
@property (nonatomic) NSString taskIdentifier;
@property (nonatomic) Q musicFetchType;
@property (nonatomic) @? completion;
@property (nonatomic) AWEVideoPublishViewModel model;
@property (nonatomic) q count;
- (unsigned long long)musicFetchType;
- (void)setMusicFetchType:;
- (void)fetchAIMusicListWithURI:bachResult:otherParam:callback:;
- (void)p_fetchDataFinishedAndReset;
- (void)p_fetchAIRecommendData:zipURI:bachResult:count:otherParam:callback:;
- (unsigned long long)p_assetsCount;
- (id)initWithIdentifier:publishModel:count:callback:;
- (void)setModel:;
- (void)dealloc;
- (void)setCount:;
- (id)completion;
- (id)taskIdentifier;
- (void)setCompletion:;
- (long long)count;
- (id)model;
- (void).cxx_destruct;
- (void)setTaskIdentifier:;
+ (id)errorOfAIRecommend;
@end
