@interface HTSLiveCoverInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray URLListArray;
@property (nonatomic) Q URLListArray_Count;
@property (nonatomic) NSString uri;
@property (nonatomic) q width;
@property (nonatomic) q height;
+ (id)descriptor;
@end
