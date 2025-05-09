@interface HTSLiveChatMessage : IESLivePBBaseMessage
@property (nonatomic) NSString replyAndPinMessageId;
@property (nonatomic) BOOL focusPublicScreen;
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL visibleToSender;
@property (nonatomic) HTSLiveImage backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) NSString fullScreenTextColor;
@property (nonatomic) HTSLiveImage backgroundImageV2;
@property (nonatomic) BOOL hasBackgroundImageV2;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (nonatomic) HTSLiveImage giftImage;
@property (nonatomic) BOOL hasGiftImage;
@property (nonatomic) q agreeMsgId;
@property (nonatomic) NSInteger priorityLevel;
@property (nonatomic) HTSLiveLandscapeAreaCommon landscapeAreaCommon;
@property (nonatomic) BOOL hasLandscapeAreaCommon;
@property (nonatomic) q eventTime;
@property (nonatomic) BOOL sendReview;
@property (nonatomic) BOOL fromIntercom;
@property (nonatomic) BOOL intercomHideUserCard;
@property (nonatomic) GPBEnumArray chatTagsArray;
@property (nonatomic) Q chatTagsArray_Count;
@property (nonatomic) q chatBy;
@property (nonatomic) NSInteger individualChatPriority;
@property (nonatomic) HTSLiveText rtfContent;
@property (nonatomic) BOOL hasRtfContent;
@property (nonatomic) HTSLiveText rtfContentV2;
@property (nonatomic) BOOL hasRtfContentV2;
- (BOOL)focusPublicScreen;
- (id)replyAndPinMessageId;
- (void)setFocusPublicScreen:;
- (void)setReplyAndPinMessageId:;
+ (id)descriptor;
@end
