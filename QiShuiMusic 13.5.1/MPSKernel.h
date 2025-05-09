@interface MPSKernel : NSObject
@property (nonatomic) BOOL enableConcurrency;
@property (nonatomic) (?=I{?=b8b8b16}) fileVersion;
@property (nonatomic) Q options;
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) NSString label;
- (id)initWithCoder:device:;
- (void)setOptions:;
- (id)copyWithZone:device:;
- (id)debugQuickLookObject;
- (id)init;
- (void)dealloc;
- (void)setLabel:;
- (id)initWithCoder:;
- (id)label;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (id)initWithDevice:;
- (id)device;
- (id)copyWithZone:;
- (id)fileVersion;
- (void)setFileVersion:;
- (void)setEnableConcurrency:;
- (BOOL)enableConcurrency;
- (id)sharedInitWithDevice:;
- (BOOL)disableConcurrentEncoder;
+ (BOOL)supportsSecureCoding;
+ (id)libraryInfo:;
@end
