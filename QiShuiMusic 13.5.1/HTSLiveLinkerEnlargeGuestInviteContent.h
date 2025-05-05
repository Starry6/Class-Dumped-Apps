@interface HTSLiveLinkerEnlargeGuestInviteContent : IESLivePBBaseMessage
@property (nonatomic) NSString fromOpenid;
@property (nonatomic) NSString toOpenid;
@property (nonatomic) NSInteger inviteType;
@property (nonatomic) HTSLiveImage uiImage;
@property (nonatomic) BOOL hasUiImage;
@property (nonatomic) NSInteger targetEnlargeGuestType;
+ (id)descriptor;
@end
