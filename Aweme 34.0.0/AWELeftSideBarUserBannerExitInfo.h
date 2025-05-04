@interface AWELeftSideBarUserBannerExitInfo : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSMutableDictionary bannerExitInfoMap;
- (id)initWithUserID:;
- (id)bannerExitInfoMap;
- (void)setBannerExitInfoMap:;
- (id)userID;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
