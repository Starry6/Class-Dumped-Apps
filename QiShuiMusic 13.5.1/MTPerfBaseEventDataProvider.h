@interface MTPerfBaseEventDataProvider : MTBaseEventDataProvider
@property (nonatomic) <MTPerfBaseEventDataProviderDelegate> delegate;
- (id)knownFields;
- (id)xpSamplingForced:;
@end
