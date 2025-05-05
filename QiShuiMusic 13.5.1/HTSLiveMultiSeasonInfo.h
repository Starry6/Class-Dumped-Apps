@interface HTSLiveMultiSeasonInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray seasonTagsArray;
@property (nonatomic) Q seasonTagsArray_Count;
+ (id)descriptor;
@end
