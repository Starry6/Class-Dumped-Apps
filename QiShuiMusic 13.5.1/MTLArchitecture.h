@interface MTLArchitecture : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString revision;
@property (nonatomic) NSInteger cpuType;
@property (nonatomic) NSInteger cpuSubtype;
- (void)dealloc;
- (int)cpuType;
- (id)revision;
- (id)name;
- (int)cpuSubtype;
- (id)initWithCPUType:cpuSubtype:;
- (id)initWithCPUType:cpuSubtype:revision:;
@end
