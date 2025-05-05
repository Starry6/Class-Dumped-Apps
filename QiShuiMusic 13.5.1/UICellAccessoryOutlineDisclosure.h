@interface UICellAccessoryOutlineDisclosure : UICellAccessory
@property (nonatomic) double rotationAngle;
@property (nonatomic) UIImage _customImage;
@property (nonatomic) q style;
@property (nonatomic) @? actionHandler;
- (id)_identifier;
- (id)init;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:;
- (void)setStyle:;
- (id)initWithCoder:;
- (void)setActionHandler:;
- (void)encodeWithCoder:;
- (id)actionHandler;
- (void).cxx_destruct;
- (double)rotationAngle;
- (long long)style;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_customImage;
- (void)_setCustomImage:;
+ (BOOL)supportsSecureCoding;
@end
