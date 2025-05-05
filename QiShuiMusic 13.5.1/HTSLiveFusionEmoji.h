@interface HTSLiveFusionEmoji : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString idStr;
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage emoji;
@property (nonatomic) BOOL hasEmoji;
@property (nonatomic) NSString desc;
@property (nonatomic) NSMutableArray originEmojiArray;
@property (nonatomic) Q originEmojiArray_Count;
+ (id)descriptor;
@end
