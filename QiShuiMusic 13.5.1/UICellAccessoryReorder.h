@interface UICellAccessoryReorder : UICellAccessory
@property (nonatomic) BOOL showsVerticalSeparator;
- (id)_identifier;
- (id)init;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setShowsVerticalSeparator:;
- (BOOL)showsVerticalSeparator;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
