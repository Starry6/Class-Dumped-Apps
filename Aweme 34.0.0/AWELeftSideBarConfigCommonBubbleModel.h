@interface AWELeftSideBarConfigCommonBubbleModel : AWELeftSideBarConfigBaseModel
@property (nonatomic) NSString title;
@property (nonatomic) BOOL needLogin;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString businessId;
@property (nonatomic) BOOL necessaryOpenSidebar;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (BOOL)needLogin;
- (void)setNeedLogin:;
- (BOOL)necessaryOpenSidebar;
- (void)setNecessaryOpenSidebar:;
- (id)schema;
- (void)setSchema:;
- (id)businessId;
- (id)description;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)copyWithZone:;
- (void)setBusinessId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
