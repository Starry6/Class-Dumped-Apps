@interface IESECSKUBottomButtonModel : MTLModel
@property (nonatomic) q buttonType;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) NSString label;
@property (nonatomic) BOOL isGray;
@property (nonatomic) BOOL hideCountdown;
@property (nonatomic) IESECSKUBottomButtonUIModel displayUIParam;
@property (nonatomic) IESECSKUBottomButtonUIModel disableUIParam;
@property (nonatomic) IESECURLModel icon;
@property (nonatomic) BOOL newType;
@property (nonatomic) BOOL originDisable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpURL;
- (BOOL)newType;
- (id)disableUIParam;
- (id)displayUIParam;
- (BOOL)hideCountdown;
- (BOOL)isGray;
- (BOOL)originDisable;
- (void)setDisableUIParam:;
- (void)setDisplayUIParam:;
- (void)setHideCountdown:;
- (void)setIsGray:;
- (void)setJumpURL:;
- (void)setNewType:;
- (void)setOriginDisable:;
- (void)setButtonType:;
- (id)icon;
- (void)setLabel:;
- (id)label;
- (void)setIcon:;
- (void).cxx_destruct;
- (long long)buttonType;
+ (id)JSONKeyPathsByPropertyKey;
@end
