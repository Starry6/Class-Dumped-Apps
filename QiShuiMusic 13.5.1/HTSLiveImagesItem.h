@interface HTSLiveImagesItem : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray imagesArray;
@property (nonatomic) Q imagesArray_Count;
@property (nonatomic) NSInteger displayStyle;
+ (id)descriptor;
@end
