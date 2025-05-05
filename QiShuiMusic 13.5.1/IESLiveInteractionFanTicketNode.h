@interface IESLiveInteractionFanTicketNode : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString fanticketValue;
@property (nonatomic) @? completion;
@property (nonatomic) NSString sendGiftUserID;
@property (nonatomic) NSString receivedGiftUserID;
@property (nonatomic) NSString thankContent;
@property (nonatomic) q thankDuration;
@property (nonatomic) NSArray avatarURLList;
- (id)avatarURLList;
- (id)fanticketValue;
- (id)receivedGiftUserID;
- (id)sendGiftUserID;
- (void)setAvatarURLList:;
- (void)setFanticketValue:;
- (void)setReceivedGiftUserID:;
- (void)setSendGiftUserID:;
- (void)setThankContent:;
- (void)setThankDuration:;
- (id)thankContent;
- (long long)thankDuration;
- (id)completion;
- (void)setCompletion:;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
@end
