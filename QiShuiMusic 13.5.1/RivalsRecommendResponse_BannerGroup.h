@interface RivalsRecommendResponse_BannerGroup : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSMutableArray bannersArray;
@property (nonatomic) Q bannersArray_Count;
@property (nonatomic) q rotationDuration;
+ (id)descriptor;
@end
