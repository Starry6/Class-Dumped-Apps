@interface BMDSLMerge : BMDSL
@property (nonatomic) BMDSL a;
@property (nonatomic) BMDSL b;
- (id)b;
- (id)upstreams;
- (id)bpsPublisher;
- (id)a;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithA:b:;
- (id)initWithA:b:name:version:;
+ (BOOL)supportsSecureCoding;
@end
