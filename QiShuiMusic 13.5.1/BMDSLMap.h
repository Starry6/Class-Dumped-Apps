@interface BMDSLMap : BMDSL
@property (nonatomic) <BMDSLTransform> transform;
@property (nonatomic) BMDSL upstream;
- (id)upstreams;
- (id)upstream;
- (id)bpsPublisher;
- (id)initWithUpstream:transform:name:version:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)transform;
- (void).cxx_destruct;
- (id)initWithUpstream:transform:;
+ (BOOL)supportsSecureCoding;
+ (id)name;
@end
