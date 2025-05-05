@interface HTSLiveLinkmicEnlargeGuestChangeUserContent : IESLivePBBaseMessage
@property (nonatomic) NSString mixEnlargedUserId;
@property (nonatomic) NSString enlargedOpenid;
@property (nonatomic) HTSLiveEnlargeGuestInfo info;
@property (nonatomic) BOOL hasInfo;
- (id)mixEnlargedUserId;
+ (id)descriptor;
@end
