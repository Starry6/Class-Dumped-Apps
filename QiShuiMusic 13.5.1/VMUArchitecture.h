@interface VMUArchitecture : NSObject
- (BOOL)is64Bit;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (int)cpuType;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (int)cpuSubtype;
- (id)copyWithZone:;
- (id)initWithCpuType:cpuSubtype:;
- (BOOL)isBigEndian;
- (BOOL)isLittleEndian;
- (BOOL)is32Bit;
- (BOOL)isEqualToArchitecture:;
- (BOOL)matchesArchitecture:;
+ (id)currentArchitecture;
+ (id)anyArchitecture;
+ (id)ppcArchitecture;
+ (id)ppc32Architecture;
+ (id)ppc64Architecture;
+ (id)i386Architecture;
+ (id)x86_32Architecture;
+ (id)x86_64Architecture;
+ (id)armArchitecture;
+ (id)architectureWithCpuType:cpuSubtype:;
@end
