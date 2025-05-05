@interface HTSLiveFeaturedContent : IESLivePBBaseMessage
@property (nonatomic) NSInteger rotationTime;
@property (nonatomic) NSMutableArray contentsArray;
@property (nonatomic) Q contentsArray_Count;
+ (id)descriptor;
@end
