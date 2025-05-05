@interface HTSLiveLinkmicQuickInteract : IESLivePBBaseMessage
@property (nonatomic) NSString mixReceiveGiftUserId;
@property (nonatomic) HTSLiveUser sendGiftUser;
@property (nonatomic) BOOL hasSendGiftUser;
@property (nonatomic) q thanksCarouselDuration;
@property (nonatomic) NSString thanksContent;
@property (nonatomic) NSString receiveGiftUserId;
- (id)mixReceiveGiftUserId;
+ (id)descriptor;
@end
