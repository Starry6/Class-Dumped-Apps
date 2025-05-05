@interface HTSLiveLinkmicEnlargeGuestTurnOnContent : IESLivePBBaseMessage
@property (nonatomic) NSString mixEnlargedUserId;
@property (nonatomic) NSString enlargedOpenid;
@property (nonatomic) NSInteger source;
@property (nonatomic) HTSLiveEnlargeGuestInfo info;
@property (nonatomic) BOOL hasInfo;
- (id)mixEnlargedUserId;
+ (id)descriptor;
@end
