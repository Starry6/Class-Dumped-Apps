@interface IESLiveInteractEmojiToCommand : IESLiveInteractEmojiBaseCommand
@property (nonatomic) BOOL flyMicRandomProbabilityDeliveryEnable;
@property (nonatomic) NSString emojiID;
@property (nonatomic) IESLiveInteractionEmojiStore emojiStore;
- (id)emojiID;
- (void)didSetAttachingDIContext;
- (void)dispatch:effect:to:;
- (id)emojiStore;
- (BOOL)flyMicRandomProbabilityDeliveryEnable;
- (BOOL)isMicSeatReshapeEnabled:;
- (void)micSeatAnimation:effect:user:completed:;
- (void)micSeatReshapeAnimation:;
- (void)setEmojiID:;
- (void)setEmojiStore:;
- (void)setFlyMicRandomProbabilityDeliveryEnable:;
- (void).cxx_destruct;
- (void)removeAnimation:;
+ (id)micSeatTable;
+ (id)reshapeSeats;
@end
