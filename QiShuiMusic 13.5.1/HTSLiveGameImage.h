@interface HTSLiveGameImage : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray URLListArray;
@property (nonatomic) Q URLListArray_Count;
@property (nonatomic) NSString uri;
@property (nonatomic) q height;
@property (nonatomic) q width;
@property (nonatomic) q rotation;
+ (id)descriptor;
@end
