@interface HTSLiveChorusOrderedSongListChangeContent : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray listInfoArray;
@property (nonatomic) Q listInfoArray_Count;
+ (id)descriptor;
@end
