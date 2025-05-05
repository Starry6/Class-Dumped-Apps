@interface HTSLiveFansclubStatisticsMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString name;
@property (nonatomic) q fansCount;
+ (id)descriptor;
@end
