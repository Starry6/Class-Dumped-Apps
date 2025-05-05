@interface HTSLiveInteractionInfoMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveLikeIconInfo likeIconInfo;
@property (nonatomic) BOOL hasLikeIconInfo;
@property (nonatomic) HTSLiveChatEmojiGuideInfo chatEmojiGuideInfo;
@property (nonatomic) BOOL hasChatEmojiGuideInfo;
@property (nonatomic) HTSLiveChatImageGuideInfo chatImageGuideInfo;
@property (nonatomic) BOOL hasChatImageGuideInfo;
@property (nonatomic) GPBEnumArray updateInfoTypeArray;
@property (nonatomic) Q updateInfoTypeArray_Count;
+ (id)descriptor;
@end
