@interface HTSLiveActivityEmojiGroup : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString idStr;
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage tagIcon;
@property (nonatomic) BOOL hasTagIcon;
@property (nonatomic) NSString desc;
@property (nonatomic) NSMutableArray emojiListArray;
@property (nonatomic) Q emojiListArray_Count;
@property (nonatomic) q insertEmojiNum;
+ (id)descriptor;
@end
