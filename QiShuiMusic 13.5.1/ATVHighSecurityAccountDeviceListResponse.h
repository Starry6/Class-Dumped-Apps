@interface ATVHighSecurityAccountDeviceListResponse : AAResponse
@property (nonatomic) NSArray devices;
@property (nonatomic) NSDictionary userDisplayStrings;
@property (nonatomic) NSString errorTitle;
@property (nonatomic) NSString errorMessage;
@property (nonatomic) q errorCode;
- (long long)errorCode;
- (id)devices;
- (id)errorMessage;
- (id)errorTitle;
- (id)userDisplayStrings;
@end
