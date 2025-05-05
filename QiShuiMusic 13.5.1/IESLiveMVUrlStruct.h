@interface IESLiveMVUrlStruct : IESLivePBBaseMessage
@property (nonatomic) NSString uri;
@property (nonatomic) NSMutableArray URLListArray;
@property (nonatomic) Q URLListArray_Count;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) NSString URLKey;
+ (id)descriptor;
@end
