@interface HTSLiveMatchRoomData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveMatchDrawer drawer;
@property (nonatomic) BOOL hasDrawer;
@property (nonatomic) HTSLiveToutiaoMatchData match;
@property (nonatomic) BOOL hasMatch;
@property (nonatomic) HTSLiveImage drawerLabel;
@property (nonatomic) BOOL hasDrawerLabel;
@property (nonatomic) NSString pcuStr;
@property (nonatomic) HTSLiveImage drawerOfficialLabel;
@property (nonatomic) BOOL hasDrawerOfficialLabel;
@property (nonatomic) HTSLiveImage matchBackground;
@property (nonatomic) BOOL hasMatchBackground;
@property (nonatomic) HTSLiveMatchUserInfo matchUserInfo;
@property (nonatomic) BOOL hasMatchUserInfo;
+ (id)descriptor;
@end
