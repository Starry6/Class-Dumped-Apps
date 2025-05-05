@interface BMDSLTumblingWindowAssigner : BMDSLWindowAssigner
@property (nonatomic) double interval;
@property (nonatomic) BMDSLAggregator aggregator;
@property (nonatomic) NSArray timestampKeyPaths;
- (id)aggregator;
- (id)initWithCoder:;
- (void)setAggregator:;
- (void)encodeWithCoder:;
- (void)setInterval:;
- (void).cxx_destruct;
- (double)interval;
- (id)initWithInterval:timestampKeyPaths:aggregator:name:version:;
- (id)initWithInterval:timestampKeyPaths:aggregator:;
- (id)timestampKeyPaths;
- (void)setTimestampKeyPaths:;
- (id)bpsWindowAssigner;
+ (BOOL)supportsSecureCoding;
@end
