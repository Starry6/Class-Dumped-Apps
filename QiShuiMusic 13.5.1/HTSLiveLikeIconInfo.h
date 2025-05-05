@interface HTSLiveLikeIconInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray iconsArray;
@property (nonatomic) Q iconsArray_Count;
@property (nonatomic) NSMutableArray emojisArray;
@property (nonatomic) Q emojisArray_Count;
@property (nonatomic) HTSLiveEmojiMaterial entryEmoji;
@property (nonatomic) BOOL hasEntryEmoji;
@property (nonatomic) HTSLivePicoVirtualLiveConfig picoVirtualLiveConfig;
@property (nonatomic) BOOL hasPicoVirtualLiveConfig;
@property (nonatomic) GPBInt64ObjectDictionary componentRelatedIcons;
@property (nonatomic) Q componentRelatedIcons_Count;
+ (id)descriptor;
@end
