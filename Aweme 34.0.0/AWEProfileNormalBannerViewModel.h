@interface AWEProfileNormalBannerViewModel : NSObject
@property (nonatomic) AWEProfileHeaderContext data;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) AWEUserModel user;
@property (nonatomic) AWEProfileContext profileContext;
@property (nonatomic) BOOL fromHomepage;
@property (nonatomic) NSDictionary trackerParam;
@property (nonatomic) BOOL isVsOfficialAccount;
- (id)trackerParam;
- (id)profileContext;
- (BOOL)isVsOfficialAccount;
- (BOOL)fromHomepage;
- (id)user;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (BOOL)isCurrentUser;
+ (id)viewModelWithData:;
@end
