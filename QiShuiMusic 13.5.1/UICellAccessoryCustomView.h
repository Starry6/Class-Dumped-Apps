@interface UICellAccessoryCustomView : UICellAccessory
@property (nonatomic) UIView customView;
@property (nonatomic) q placement;
@property (nonatomic) BOOL maintainsFixedSize;
@property (nonatomic) @? position;
- (id)sf_initWithCustomView:placement:trailingPadding:;
- (void)setPosition:;
- (long long)placement;
- (id)position;
- (id)_identifier;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)customView;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)_isSystemType;
- (BOOL)maintainsFixedSize;
- (void)setMaintainsFixedSize:;
- (long long)_defaultPlacementForHeader:;
- (id)initWithCustomView:placement:;
+ (BOOL)supportsSecureCoding;
@end
