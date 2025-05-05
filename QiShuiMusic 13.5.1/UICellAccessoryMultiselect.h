@interface UICellAccessoryMultiselect : UICellAccessory
@property (nonatomic) UIColor backgroundColor;
- (id)_identifier;
- (id)init;
- (void)setBackgroundColor:;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:;
- (id)backgroundColor;
+ (BOOL)supportsSecureCoding;
@end
