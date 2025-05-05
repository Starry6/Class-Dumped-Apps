@interface CNLabelValuePair : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) @ value;
- (id)initWithLabel:value:;
- (unsigned long long)hash;
- (id)label;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)labeledValueWithLabel:value:;
@end
