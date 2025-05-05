@interface JetEngine.JSHostObject : NSObject
@property (nonatomic) NSString platform;
@property (nonatomic) NSString osBuild;
@property (nonatomic) NSString deviceModel;
@property (nonatomic) NSString deviceLocalizedModel;
@property (nonatomic) NSString devicePhysicalModel;
@property (nonatomic) NSString deviceModelFamily;
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSString clientVersion;
- (id)osBuild;
- (id)deviceModel;
- (id)init;
- (id)devicePhysicalModel;
- (id)deviceModelFamily;
- (id)platform;
- (BOOL)isOSAtLeast:::;
- (id)deviceLocalizedModel;
- (id)clientIdentifier;
- (id)clientVersion;
@end
