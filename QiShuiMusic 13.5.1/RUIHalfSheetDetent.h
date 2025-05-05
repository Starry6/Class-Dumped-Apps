@interface RUIHalfSheetDetent : _UISheetDetent
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)shouldUsePadHeightForTraitCollection:;
@end
