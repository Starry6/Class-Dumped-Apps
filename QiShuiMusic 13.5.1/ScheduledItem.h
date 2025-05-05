@interface ScheduledItem : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) NSString unionId;
@property (nonatomic) HTSLiveImage avatar;
@property (nonatomic) BOOL hasAvatar;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString scheduledText;
@property (nonatomic) NSString announcementContent;
+ (id)descriptor;
@end
