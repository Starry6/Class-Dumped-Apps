@interface HTSLiveRegionRestriction : IESLivePBBaseMessage
@property (nonatomic) q type;
@property (nonatomic) NSMutableArray whiteListArray;
@property (nonatomic) Q whiteListArray_Count;
@property (nonatomic) NSMutableArray blackListArray;
@property (nonatomic) Q blackListArray_Count;
+ (id)descriptor;
@end
