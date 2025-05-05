@interface HTSLiveGrowthTaskCondDef : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString key;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString operator_p;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
