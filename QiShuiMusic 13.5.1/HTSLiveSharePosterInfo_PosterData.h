@interface HTSLiveSharePosterInfo_PosterData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray posterArray;
@property (nonatomic) Q posterArray_Count;
@property (nonatomic) NSMutableArray decoratorArray;
@property (nonatomic) Q decoratorArray_Count;
+ (id)descriptor;
@end
