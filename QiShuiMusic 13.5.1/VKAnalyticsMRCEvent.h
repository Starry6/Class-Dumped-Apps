@interface VKAnalyticsMRCEvent : VKAnalyticsEvent
@property (nonatomic) q eventType;
@property (nonatomic) NSString barcodeSymbology;
@property (nonatomic) q _dataType;
@property (nonatomic) q dataType;
- (long long)eventType;
- (void)setEventType:;
- (id)eventKey;
- (long long)dataType;
- (long long)type;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;
- (id)description;
- (long long)_dataType;
- (id)initWithElement:eventType:customIdentifier:;
- (id)barcodeSymbology;
- (void)setBarcodeSymbology:;
- (void)set_dataType:;
@end
