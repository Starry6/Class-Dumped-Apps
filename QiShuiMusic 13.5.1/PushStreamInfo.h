@interface PushStreamInfo : IESLivePBBaseMessage
@property (nonatomic) NSString defaultResolutionKey;
@property (nonatomic) NSMutableArray resolutionsArray;
@property (nonatomic) Q resolutionsArray_Count;
+ (id)descriptor;
@end
