@interface CTSIMToolkitItem : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) BOOL selected;
- (BOOL)selected;
- (void)setText:;
- (void)setSelected:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)text;
- (id)copyWithZone:;
- (id)initWithText:selected:;
+ (BOOL)supportsSecureCoding;
@end
