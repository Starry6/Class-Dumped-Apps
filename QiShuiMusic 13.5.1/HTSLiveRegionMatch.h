@interface HTSLiveRegionMatch : IESLivePBBaseMessage
@property (nonatomic) q type;
@property (nonatomic) NSMutableArray allowListArray;
@property (nonatomic) Q allowListArray_Count;
@property (nonatomic) NSMutableArray denyListArray;
@property (nonatomic) Q denyListArray_Count;
+ (id)descriptor;
@end
