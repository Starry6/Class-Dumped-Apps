@interface BDAntiAddictionComplianceSettingsModel : NSObject
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) BDAntiAddictionComplianceSettingsTeenStatusModel teenStatusModel;
@property (nonatomic) BDAntiAddictionComplianceSettingsTimeLockModel timeLockModel;
@property (nonatomic) BDAntiAddictionComplianceSettingsCurfewLockModel curfewLockModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)teenStatusModel;
- (id)curfewLockModel;
- (void)setCurfewLockModel:;
- (void)setStatusMsg:;
- (void)setTeenStatusModel:;
- (void)setTimeLockModel:;
- (id)statusMsg;
- (id)timeLockModel;
- (void)setStatusCode:;
- (id)statusCode;
- (void).cxx_destruct;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
