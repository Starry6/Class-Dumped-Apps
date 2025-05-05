@interface IESLiveSaaSPBFollowGuideMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveSaaSPBImage avatarURL;
@property (nonatomic) BOOL hasAvatarURL;
@property (nonatomic) NSString content;
@property (nonatomic) NSString hourRankInfo;
@property (nonatomic) q giftId;
@property (nonatomic) q duration;
@property (nonatomic) NSString popupReason;
+ (id)descriptor;
@end
