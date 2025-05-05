@interface BMDSLCollect : BMDSL
@property (nonatomic) BMDSL upstream;
- (id)upstreams;
- (id)upstream;
- (id)bpsPublisher;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithUpstream:;
- (void).cxx_destruct;
- (id)initWithUpstream:name:version:;
+ (BOOL)supportsSecureCoding;
@end
