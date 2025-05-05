@interface HTSLiveRoomInteractData : IESLivePBBaseMessage
@property (nonatomic) q landscapeCommentStyle;
@property (nonatomic) HTSLiveEpisodeExtraInfo vsComponentExtra;
@property (nonatomic) BOOL hasVsComponentExtra;
@property (nonatomic) HTSLiveFeaturedPublicScreenConf featuredPublicScreenData;
@property (nonatomic) BOOL hasFeaturedPublicScreenData;
@property (nonatomic) HTSLivePublicScreenSpeedConf publicScreenSpeedConf;
@property (nonatomic) BOOL hasPublicScreenSpeedConf;
@property (nonatomic) RoomIntroLabel publicRoomIntroLabel;
@property (nonatomic) BOOL hasPublicRoomIntroLabel;
+ (id)descriptor;
@end
