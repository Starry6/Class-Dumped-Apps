@interface HTSLiveBusinessConfigure : IESLivePBBaseMessage
@property (nonatomic) q businessId;
@property (nonatomic) q busType;
@property (nonatomic) NSInteger delaySecond;
@property (nonatomic) q preciseTime;
@property (nonatomic) NSInteger displaySecond;
@property (nonatomic) HTSLiveResourceConfigure resConfig;
@property (nonatomic) BOOL hasResConfig;
@property (nonatomic) q delType;
+ (id)descriptor;
@end
