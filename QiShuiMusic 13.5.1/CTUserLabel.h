@interface CTUserLabel : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString label;
@property (nonatomic) NSString labelId;
- (id)initWithLabel:;
- (id)key;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)label;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)labelId;
- (id)initWithKey:label:labelId:;
- (long long)indexInPredefinedLabels:;
- (id)_labelKeyDescription;
+ (BOOL)supportsSecureCoding;
@end
