@interface AWEIndividualPlayHelper : NSObject
@property (nonatomic) NSArray cacheFeedList;
@property (nonatomic) double feedRequestTimeStamp;
@property (nonatomic) double feedResponseTimeStamp;
- (id)jumpBtnInfoWithModel:;
- (id)cacheFeedList;
- (BOOL)canIndividualPlay;
- (void)saveFeedRequestTimeStamp;
- (void)saveNoIndividualReason:;
- (BOOL)hasValidModel;
- (id)cacheHotList;
- (void)setFeedRequestTimeStamp:;
- (void)setFeedResponseTimeStamp:;
- (double)feedRequestTimeStamp;
- (double)feedResponseTimeStamp;
- (void)setCacheFeedList:;
- (void).cxx_destruct;
@end
