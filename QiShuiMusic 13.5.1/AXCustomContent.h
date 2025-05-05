@interface AXCustomContent : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) NSAttributedString attributedLabel;
@property (nonatomic) NSString value;
@property (nonatomic) NSAttributedString attributedValue;
@property (nonatomic) Q importance;
- (void)setLabel:;
- (id)initWithCoder:;
- (id)label;
- (unsigned long long)importance;
- (void)encodeWithCoder:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)_init;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setImportance:;
- (id)attributedLabel;
- (void)setAttributedLabel:;
- (id)attributedValue;
- (void)setAttributedValue:;
+ (BOOL)supportsSecureCoding;
+ (id)customContentWithLabel:value:;
+ (id)customContentWithAttributedLabel:attributedValue:;
@end
