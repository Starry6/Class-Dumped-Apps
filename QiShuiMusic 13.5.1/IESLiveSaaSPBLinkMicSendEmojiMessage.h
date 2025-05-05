@interface IESLiveSaaSPBLinkMicSendEmojiMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveSaaSPBUser fromUser;
@property (nonatomic) BOOL hasFromUser;
@property (nonatomic) IESLiveSaaSPBLinkmicAudienceEmoji emoji;
@property (nonatomic) BOOL hasEmoji;
@property (nonatomic) IESLiveSaaSPBImage emojiImageResult;
@property (nonatomic) BOOL hasEmojiImageResult;
@property (nonatomic) IESLiveSaaSPBUser toUser;
@property (nonatomic) BOOL hasToUser;
+ (id)descriptor;
@end
