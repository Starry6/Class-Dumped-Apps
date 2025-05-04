@interface AWEBizTabBarItemConfigBadgeModel : AWEHPBaseComponentModel
@property (nonatomic) Q badgeType;
@property (nonatomic) Q entranceAnimationType;
@property (nonatomic) q number;
@property (nonatomic) NSString text;
@property (nonatomic) NSDictionary bizTrackParams;
@property (nonatomic) @? bizTrackParamsBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)entranceAnimationType;
- (void)downGradeToRedDot;
- (void)setEntranceAnimationType:;
- (id)initWithComponentID:;
- (id)initWithComponentID:withNumber:;
- (id)initWithComponentID:withText:;
- (void)setText:;
- (id)text;
- (long long)number;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setNumber:;
- (unsigned long long)badgeType;
- (void)setBadgeType:;
@end
