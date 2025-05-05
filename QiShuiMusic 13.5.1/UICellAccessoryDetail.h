@interface UICellAccessoryDetail : UICellAccessory
@property (nonatomic) @? actionHandler;
- (id)_identifier;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:;
- (void)setActionHandler:;
- (id)actionHandler;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
