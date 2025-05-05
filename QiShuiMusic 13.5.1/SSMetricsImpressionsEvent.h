@interface SSMetricsImpressionsEvent : SSMetricsBaseEvent
@property (nonatomic) NSArray impressionIdentifiers;
- (id)init;
- (id)description;
- (id)impressionIdentifiers;
- (void)setImpressionIdentifiers:;
@end
