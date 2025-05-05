@interface CNAutocompleteStoreReproStringRecorder : NSObject
@property (nonatomic) <CNTimeProvider> timeProvider;
@property (nonatomic) NSMutableString reproStringStorage;
@property (nonatomic) NSNumber lastTimestamp;
@property (nonatomic) NSString lastString;
@property (nonatomic) NSString reproString;
- (id)init;
- (id)timeProvider;
- (void)setLastTimestamp:;
- (void)clear;
- (void).cxx_destruct;
- (id)description;
- (id)lastTimestamp;
- (id)initWithTimeProvider:;
- (id)reproString;
- (void)recordString:;
- (id)stringForIntervalSinceLastTimestamp:;
- (id)stringForKeystrokesSinceLastString:;
- (id)reproStringStorage;
- (id)lastString;
- (void)setLastString:;
@end
