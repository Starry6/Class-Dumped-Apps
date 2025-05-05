@interface MTImpressionsEventHandler : MTImpressionableEventHandler
@property (nonatomic) <MTImpressionsEventHandlerDelegate> delegate;
- (id)eventType;
- (id)knownFields;
- (id)eventVersion:;
- (id)xpViewableThreshold:;
@end
