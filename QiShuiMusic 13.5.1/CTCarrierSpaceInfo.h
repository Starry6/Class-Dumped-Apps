@interface CTCarrierSpaceInfo : NSObject
@property (nonatomic) CTCarrierSpaceUsageInfo usageInfo;
@property (nonatomic) CTCarrierSpacePlansInfo plansInfo;
@property (nonatomic) CTCarrierSpaceAppsInfo appsInfo;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)usageInfo;
- (void)setUsageInfo:;
- (id)plansInfo;
- (void)setPlansInfo:;
- (id)appsInfo;
- (void)setAppsInfo:;
+ (BOOL)supportsSecureCoding;
@end
