@interface EFDevice : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) BOOL isInternal;
@property (nonatomic) NSString platformName;
@property (nonatomic) BOOL isRunningNative;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsInternal:;
- (BOOL)isInternal;
- (id)identifier;
- (BOOL)isPlatform:;
- (BOOL)isRunningNative;
- (void).cxx_destruct;
- (id)_init;
- (id)platformName;
- (BOOL)isAppleSilicon;
- (void)setIdentifier:;
+ (id)currentDevice;
+ (id)log;
+ (void)executeWithDeviceIsExternal:;
+ (void)setCurrentDevice:;
+ (void)executeWithDeviceIsInternal:;
+ (id)testingDeviceWithInternal:;
@end
