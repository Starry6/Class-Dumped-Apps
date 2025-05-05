@interface CLFindMyAccessoryFirmwareVersion : NSObject
@property (nonatomic) NSString vanBurenVersion;
@property (nonatomic) NSString rtKitVersion;
@property (nonatomic) NSString specificationVersion;
@property (nonatomic) Q roseAPVersion;
@property (nonatomic) Q roseDSPVersion;
@property (nonatomic) Q hardwareVersion;
@property (nonatomic) Q calibrationDataVersion;
- (id)initWithBytes:length:;
- (unsigned long long)hardwareVersion;
- (void)dealloc;
- (id)initWithData:;
- (id)description;
- (id)vanBurenVersion;
- (id)rtKitVersion;
- (id)specificationVersion;
- (unsigned long long)roseAPVersion;
- (unsigned long long)roseDSPVersion;
- (unsigned long long)calibrationDataVersion;
@end
