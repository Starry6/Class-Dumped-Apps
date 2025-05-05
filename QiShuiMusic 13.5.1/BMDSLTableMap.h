@interface BMDSLTableMap : BMDSL
@property (nonatomic) <BMDSLRowTransform> transform;
@property (nonatomic) BMDSL upstream;
@property (nonatomic) BMTableSchema schema;
- (id)upstreams;
- (id)select:;
- (id)upstream;
- (id)schema;
- (id)bpsPublisher;
- (void)setTransform:;
- (id)initWithCoder:;
- (void)setSchema:;
- (void)encodeWithCoder:;
- (id)transform;
- (void)setUpstream:;
- (void).cxx_destruct;
- (id)initWithUpstream:transform:schema:name:version:;
- (id)initWithUpstream:transform:schema:;
+ (BOOL)supportsSecureCoding;
@end
