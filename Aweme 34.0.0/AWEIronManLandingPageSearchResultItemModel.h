@interface AWEIronManLandingPageSearchResultItemModel : AWEIronManLandingPageBaseRouterModel
@property (nonatomic) NSString appID;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSString desc;
@property (nonatomic) BOOL trackFlag;
- (BOOL)trackFlag;
- (void)setTrackFlag:;
- (void)setIconURL:;
- (id)location;
- (id)iconURL;
- (id)appID;
- (void)setDesc:;
- (id)desc;
- (void)setAppID:;
- (void).cxx_destruct;
- (void)setAppName:;
- (id)appName;
+ (id)JSONKeyPathsByPropertyKey;
@end
