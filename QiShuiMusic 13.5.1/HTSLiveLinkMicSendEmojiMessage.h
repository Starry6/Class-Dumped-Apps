@interface HTSLiveLinkMicSendEmojiMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveUser fromUser;
@property (nonatomic) BOOL hasFromUser;
@property (nonatomic) HTSLiveLinkmicAudienceEmoji emoji;
@property (nonatomic) BOOL hasEmoji;
@property (nonatomic) HTSLiveImage emojiImageResult;
@property (nonatomic) BOOL hasEmojiImageResult;
@property (nonatomic) HTSLiveUser toUser;
@property (nonatomic) BOOL hasToUser;
@property (nonatomic) NSString source;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
+ (id)descriptor;
@end
