@interface MTImpressionableEventHandler : MTStandardEventHandler
@property (nonatomic) <MTImpressionableEventHandlerDelegate> delegate;
- (id)knownFields;
- (id)impressions:;
- (id)xpViewablePercentage:;
@end
