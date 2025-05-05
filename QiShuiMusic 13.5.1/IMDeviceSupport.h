@interface IMDeviceSupport : NSObject
@property (nonatomic) NSString model;
@property (nonatomic) NSString userAgentString;
@property (nonatomic) NSString productName;
@property (nonatomic) NSString productVersion;
@property (nonatomic) NSString productBuildVersion;
@property (nonatomic) NSString deviceInformationString;
- (id)productName;
- (id)userAgentString;
- (id)model;
- (id)productVersion;
- (id)init;
- (void).cxx_destruct;
- (id)productBuildVersion;
- (id)deviceInformationString;
- (void)_generateProductInformation;
+ (id)sharedInstance;
+ (id)marketingNameForModel:;
@end
