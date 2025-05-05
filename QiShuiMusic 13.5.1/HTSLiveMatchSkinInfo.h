@interface HTSLiveMatchSkinInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveMatchSkinInfo_FollowBtnSkin unfollowSkin;
@property (nonatomic) BOOL hasUnfollowSkin;
@property (nonatomic) HTSLiveMatchSkinInfo_FollowBtnSkin followedSkin;
@property (nonatomic) BOOL hasFollowedSkin;
@property (nonatomic) NSString tabSelectedColor;
@property (nonatomic) NSString tabUnselectedColor;
@property (nonatomic) NSString commentPlaceHolderColor;
@property (nonatomic) NSString anchorNameColor;
@property (nonatomic) NSString anchorInfoColor;
@property (nonatomic) HTSLiveImage userBannerImage;
@property (nonatomic) BOOL hasUserBannerImage;
@property (nonatomic) HTSLiveImage toolBarImage;
@property (nonatomic) BOOL hasToolBarImage;
@property (nonatomic) NSString commentPlaceHolderBgColor;
@property (nonatomic) HTSLiveImage shareIcon;
@property (nonatomic) BOOL hasShareIcon;
+ (id)descriptor;
@end
