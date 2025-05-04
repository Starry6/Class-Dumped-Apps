@interface AWEIronManLandingPageCommonItemModel : AWEIronManLandingPageBaseRouterModel
@property (nonatomic) NSString appID;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSString desc;
@property (nonatomic) NSArray tagList;
@property (nonatomic) Q collectingStatus;
@property (nonatomic) BOOL trackFlag;
- (id)tagList;
- (void)setTagList:;
- (void)setCollectingStatus:;
- (unsigned long long)collectingStatus;
- (BOOL)trackFlag;
- (void)setTrackFlag:;
- (void)setIconURL:;
- (id)iconURL;
- (id)appID;
- (void)setDesc:;
- (id)desc;
- (void)setAppID:;
- (void).cxx_destruct;
- (void)setAppName:;
- (BOOL)isEqual:;
- (id)appName;
+ (id)JSONKeyPathsByPropertyKey;
@end
