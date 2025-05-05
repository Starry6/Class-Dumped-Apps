@interface HTSLiveVSPannelIcon : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage spLandscapeIcon;
@property (nonatomic) BOOL hasSpLandscapeIcon;
@property (nonatomic) HTSLiveImage spVerticalIcon;
@property (nonatomic) BOOL hasSpVerticalIcon;
@property (nonatomic) HTSLiveImage landscapeVerticalSwitchIcon;
@property (nonatomic) BOOL hasLandscapeVerticalSwitchIcon;
@property (nonatomic) HTSLiveImage lockScreenIcon;
@property (nonatomic) BOOL hasLockScreenIcon;
@property (nonatomic) HTSLiveImage landscapeMoreIcon;
@property (nonatomic) BOOL hasLandscapeMoreIcon;
@property (nonatomic) HTSLiveImage verticalMoreIcon;
@property (nonatomic) BOOL hasVerticalMoreIcon;
@property (nonatomic) HTSLiveImage landscapeCommentIcon;
@property (nonatomic) BOOL hasLandscapeCommentIcon;
@property (nonatomic) HTSLiveImage verticalCommentIcon;
@property (nonatomic) BOOL hasVerticalCommentIcon;
@property (nonatomic) HTSLiveImage verticalLandscapeSwitchIcon;
@property (nonatomic) BOOL hasVerticalLandscapeSwitchIcon;
@property (nonatomic) HTSLiveImage verticalLockScreenIcon;
@property (nonatomic) BOOL hasVerticalLockScreenIcon;
+ (id)descriptor;
@end
