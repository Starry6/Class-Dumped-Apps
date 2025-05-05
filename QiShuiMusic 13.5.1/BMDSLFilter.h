@interface BMDSLFilter : BMDSL
@property (nonatomic) NSString keyPath;
@property (nonatomic) BOOL negation;
@property (nonatomic) q comparison;
@property (nonatomic) <NSSecureCoding> value;
@property (nonatomic) BMDSL upstream;
- (id)upstreams;
- (long long)comparison;
- (id)upstream;
- (id)init;
- (id)bpsPublisher;
- (id)initWithUpstream:keyPath:value:;
- (id)initWithUpstream:keyPath:comparison:negation:value:;
- (id)initWithDictionary:error:;
- (id)initWithUpstream:keyPath:comparison:negation:value:name:version:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)keyPath;
- (BOOL)negation;
- (void).cxx_destruct;
- (id)value;
+ (id)new;
+ (BOOL)supportsSecureCoding;
+ (id)name;
@end
