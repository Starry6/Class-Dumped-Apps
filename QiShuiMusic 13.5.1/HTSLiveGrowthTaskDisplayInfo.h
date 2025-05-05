@interface HTSLiveGrowthTaskDisplayInfo : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) q groupId;
@property (nonatomic) q classId;
@property (nonatomic) NSString details;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
