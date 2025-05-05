@interface BMDSLOrderedMerge : BMDSL
@property (nonatomic) BMDSL a;
@property (nonatomic) BMDSL b;
@property (nonatomic) NSString key;
@property (nonatomic) NSString selectorName;
- (id)b;
- (id)upstreams;
- (id)bpsPublisher;
- (id)a;
- (id)key;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithA:b:key:selector:name:version:;
- (id)initWithA:b:key:selector:;
- (id)selectorName;
+ (BOOL)supportsSecureCoding;
@end
