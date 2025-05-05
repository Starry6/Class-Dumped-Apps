@interface BMDSLArray : BMDSL
@property (nonatomic) NSArray values;
@property (nonatomic) NSString valueClassName;
- (id)upstreams;
- (id)bpsPublisher;
- (id)values;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithName:version:values:valueClassName:;
- (id)initWithValues:valueClassName:;
- (id)valueClassName;
- (void)setValueClassName:;
+ (BOOL)supportsSecureCoding;
@end
