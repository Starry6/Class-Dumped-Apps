@interface BDAntiAddictionComplianceSettingsCurfewLockModel : NSObject
@property (nonatomic) q curfewStartTime;
@property (nonatomic) q curfewEndTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)curfewStartTime;
- (long long)curfewEndTime;
- (void)setCurfewEndTime:;
- (void)setCurfewStartTime:;
+ (id)modelCustomPropertyMapper;
@end
