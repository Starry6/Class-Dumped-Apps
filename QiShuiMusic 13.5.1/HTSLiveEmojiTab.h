@interface HTSLiveEmojiTab : IESLivePBBaseMessage
@property (nonatomic) q tabId;
@property (nonatomic) NSString tabText;
@property (nonatomic) HTSLiveButtonImage tabButton;
@property (nonatomic) BOOL hasTabButton;
@property (nonatomic) q emojiType;
@property (nonatomic) NSMutableArray emojisArray;
@property (nonatomic) Q emojisArray_Count;
+ (id)descriptor;
@end
