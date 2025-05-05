@interface TRIAllocationStatus : NSObject
@property (nonatomic) C type;
@property (nonatomic) NSDate date;
- (BOOL)isEqualToStatus:;
- (id)initWithType:date:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)date;
- (void)encodeWithCoder:;
- (unsigned char)type;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)syncProxyWithErrorHandler:;
+ (BOOL)supportsSecureCoding;
+ (id)_defaultProvider;
+ (id)notificationNameForDeploymentEnvironment:;
+ (id)sampleAllocationStatuses:correlationId:nrSamples:;
+ (id)defaultProvider;
+ (id)activeExperimentInformationWithError:;
@end
