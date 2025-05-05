@interface HTSLiveLinkmicGiftRecipientContent : IESLivePBBaseMessage
@property (nonatomic) NSString mixGiftRecipientUserId;
@property (nonatomic) NSString giftRecipientUserId;
@property (nonatomic) NSInteger reason;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
- (id)mixGiftRecipientUserId;
- (void)setMixGiftRecipientUserId:;
+ (id)descriptor;
@end
