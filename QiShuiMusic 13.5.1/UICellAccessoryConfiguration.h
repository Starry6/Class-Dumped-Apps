@interface UICellAccessoryConfiguration : NSObject
@property (nonatomic) NSArray leadingAccessories;
@property (nonatomic) NSArray trailingAccessories;
- (id)init;
- (id)trailingAccessories;
- (id)leadingAccessories;
- (BOOL)alwaysNeedsLayout;
- (void)setLeadingAccessories:;
- (void).cxx_destruct;
- (id)description;
- (void)setTrailingAccessories:;
- (BOOL)isEqual:;
@end
