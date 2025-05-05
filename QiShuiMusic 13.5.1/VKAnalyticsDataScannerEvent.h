@interface VKAnalyticsDataScannerEvent : VKAnalyticsEvent
@property (nonatomic) double feedDuration;
@property (nonatomic) BOOL didScanForText;
@property (nonatomic) BOOL didScanForBarcodes;
- (id)eventKey;
- (long long)type;
- (id)coreAnalyticsDictionary;
- (id)description;
- (id)initWithFeedDuration:scannedForText:scannedForBarcodes:customIdentifier:;
- (double)feedDuration;
- (void)setFeedDuration:;
- (BOOL)didScanForText;
- (void)setDidScanForText:;
- (BOOL)didScanForBarcodes;
- (void)setDidScanForBarcodes:;
@end
