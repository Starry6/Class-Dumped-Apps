@interface SSMetricsMediaEvent : SSMetricsBaseEvent
@property (nonatomic) NSNumber itemIdentifier;
@property (nonatomic) NSString locationDescription;
@property (nonatomic) NSString mediaEventType;
@property (nonatomic) NSString mediaURL;
- (void)setItemIdentifier:;
- (id)itemIdentifier;
- (id)init;
- (id)mediaURL;
- (void)setMediaURL:;
- (id)locationDescription;
- (void)setLocationDescription:;
- (void)setLocationWithEventLocations:;
- (id)mediaEventType;
- (void)setMediaEventType:;
@end
