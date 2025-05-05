@interface UICellAccessoryInsert : UICellAccessory
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) @? actionHandler;
- (id)_identifier;
- (id)init;
- (void)setBackgroundColor:;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:;
- (id)backgroundColor;
- (void)setActionHandler:;
- (id)actionHandler;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
