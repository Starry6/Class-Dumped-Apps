@interface HTSLiveGuestHonorInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger guestHonorType;
@property (nonatomic) q level;
@property (nonatomic) q subLevel;
@property (nonatomic) HTSLiveHonorIconContent iconList;
@property (nonatomic) BOOL hasIconList;
+ (id)descriptor;
@end
