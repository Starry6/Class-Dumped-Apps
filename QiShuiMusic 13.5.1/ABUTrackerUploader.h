@interface ABUTrackerUploader : NSObject
@property (nonatomic) @? listener;
- (void)_handleResponseWithBaseRequest:andParams:completion:;
- (long long)convertCondition:;
- (void)uploadTrackerEvents:withCondition:complete:;
- (id)listener;
- (void).cxx_destruct;
- (void)setListener:;
+ (id)resultForUpload;
+ (id)resultDicForResults:;
+ (void)updateReportResult:withParams:;
@end
