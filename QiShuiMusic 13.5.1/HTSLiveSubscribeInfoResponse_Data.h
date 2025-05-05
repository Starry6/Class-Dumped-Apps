@interface HTSLiveSubscribeInfoResponse_Data : IESLivePBBaseMessage
@property (nonatomic) q emojiStatus;
@property (nonatomic) q emojiTip;
@property (nonatomic) NSMutableArray emojiListArray;
@property (nonatomic) Q emojiListArray_Count;
@property (nonatomic) BOOL isMember;
@property (nonatomic) BOOL entrance;
@property (nonatomic) BOOL entranceTab;
@property (nonatomic) NSInteger memberType;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) HTSLiveSubscribeGiftInfo subscribeGiftInfo;
@property (nonatomic) BOOL hasSubscribeGiftInfo;
@property (nonatomic) HTSLiveEmojiTabInfo emojiTabInfo;
@property (nonatomic) BOOL hasEmojiTabInfo;
@property (nonatomic) HTSLiveSubscribeInfoResponse_UserData userData;
@property (nonatomic) BOOL hasUserData;
@property (nonatomic) HTSLiveSubscribeInfoResponse_AnchorData anchorData;
@property (nonatomic) BOOL hasAnchorData;
+ (id)descriptor;
@end
