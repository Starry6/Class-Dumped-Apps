@interface BMDSLState : BMDSL
@property (nonatomic) BMDSL upstream;
@property (nonatomic) NSString key;
@property (nonatomic) <BMDSLStateValue> value;
@property (nonatomic) <BMDSLStateValue> combinedValue;
- (id)upstreams;
- (id)upstream;
- (id)bpsPublisher;
- (id)key;
- (void)setCombinedValue:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithUpstream:key:value:;
- (void).cxx_destruct;
- (id)upstreamCombinedState;
- (id)combinedValue;
- (id)value;
- (id)combinedState;
- (id)initWithName:version:upstream:key:value:;
+ (BOOL)supportsSecureCoding;
+ (id)name;
@end
