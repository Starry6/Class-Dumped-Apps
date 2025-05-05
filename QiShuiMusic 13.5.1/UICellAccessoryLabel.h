@interface UICellAccessoryLabel : UICellAccessory
@property (nonatomic) NSString text;
@property (nonatomic) UIFont font;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
- (id)initWithText:;
- (id)_identifier;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:;
- (void)setFont:;
- (void)setAdjustsFontForContentSizeCategory:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)font;
- (BOOL)adjustsFontForContentSizeCategory;
- (id)text;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
