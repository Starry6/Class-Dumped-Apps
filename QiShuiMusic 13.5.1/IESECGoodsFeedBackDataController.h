@interface IESECGoodsFeedBackDataController : NSObject
+ (id)latestFeedBackModel;
+ (void)requestFeedBackInfoWithCompletion:;
+ (void)requestFeedBackReportWithRequest:;
+ (void)setLatestFeedBackModel:;
@end
