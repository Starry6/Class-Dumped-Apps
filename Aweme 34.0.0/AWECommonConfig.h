@interface AWECommonConfig : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)followButtonPossibleTitles;
+ (BOOL)enablePrivateAccount;
+ (BOOL)enableDuet;
+ (BOOL)enableReact;
+ (BOOL)ix_enableNewRecord;
+ (BOOL)enableLivePhoto;
+ (BOOL)forbidDownloadLocal;
+ (BOOL)enableTrending;
+ (BOOL)showStarBoardInDiscover;
+ (BOOL)showMusicBoardInDiscover;
+ (unsigned long long)starBillboardType;
+ (unsigned long long)musicBillboardType;
+ (id)followButtonTitleIconForFollowStatus:followerStatus:;
+ (id)followButtonTitleIconForTargetUser:;
+ (BOOL)isSupport3DTouch;
@end
