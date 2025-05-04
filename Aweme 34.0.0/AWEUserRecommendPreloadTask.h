@interface AWEUserRecommendPreloadTask : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSObject<AWEUserRecommendDataControllerProtocol> dataController;
@property (nonatomic) @? completion;
@property (nonatomic) NSDate completionTime;
@property (nonatomic) AWEUserRecommendResponse response;
- (void)setDataController:;
- (id)completion;
- (void)setCompletion:;
- (id)response;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setResponse:;
- (id)dataController;
- (id)completionTime;
- (void)setCompletionTime:;
@end
