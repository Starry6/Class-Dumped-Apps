@interface HTSLiveEmojiChatMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q emojiId;
@property (nonatomic) HTSLiveText emojiContent;
@property (nonatomic) BOOL hasEmojiContent;
@property (nonatomic) NSString defaultContent;
@property (nonatomic) HTSLiveImage backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) BOOL fromIntercom;
@property (nonatomic) BOOL intercomHideUserCard;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
+ (id)descriptor;
@end
