@interface BizOpenGameInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage iconImage;
@property (nonatomic) BOOL hasIconImage;
@property (nonatomic) NSString gameTitle;
@property (nonatomic) NSString inviteTitle;
+ (id)descriptor;
@end
