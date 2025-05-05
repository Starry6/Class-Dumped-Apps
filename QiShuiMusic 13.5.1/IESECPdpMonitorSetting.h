@interface IESECPdpMonitorSetting : MTLModel
@property (nonatomic) BOOL alogSwitch;
@property (nonatomic) NSArray alogBlockList;
@property (nonatomic) double uploadSample;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alogBlockList;
- (BOOL)alogSwitch;
- (void)setAlogBlockList:;
- (void)setAlogSwitch:;
- (void)setUploadSample:;
- (double)uploadSample;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
