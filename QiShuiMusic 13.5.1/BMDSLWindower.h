@interface BMDSLWindower : BMDSL
@property (nonatomic) NSString keyedPath;
@property (nonatomic) BMDSLWindowAssigner assigner;
@property (nonatomic) BMDSL upstream;
- (id)upstreams;
- (id)upstream;
- (id)bpsPublisher;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)assigner;
- (id)initWithUpstream:keyedPath:assigner:name:version:;
- (id)initWithUpstream:keyedPath:assigner:;
- (id)keyedPath;
+ (BOOL)supportsSecureCoding;
+ (id)name;
@end
