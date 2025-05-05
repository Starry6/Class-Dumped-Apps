@interface UICellAccessoryPopUpMenu : UICellAccessory
@property (nonatomic) UIMenu _internalMenu;
@property (nonatomic) UIMenu menu;
@property (nonatomic) @? selectedElementDidChangeHandler;
- (id)_identifier;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)menu;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)selectedElementDidChangeHandler;
- (void)setSelectedElementDidChangeHandler:;
- (id)initWithMenu:;
- (id)_internalMenu;
+ (BOOL)supportsSecureCoding;
@end
