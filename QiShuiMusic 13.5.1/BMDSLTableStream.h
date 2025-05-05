@interface BMDSLTableStream : BMDSL
@property (nonatomic) BMDSL upstream;
@property (nonatomic) <BMTableQueryExpression> expression;
- (id)upstreams;
- (id)select:;
- (id)upstream;
- (id)expression;
- (id)bpsPublisher;
- (void)setExpression:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setUpstream:;
- (void).cxx_destruct;
- (id)initWithUpstream:expression:name:version:;
- (id)initWithUpstream:expression:;
+ (BOOL)supportsSecureCoding;
@end
