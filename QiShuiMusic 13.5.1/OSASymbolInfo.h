@interface OSASymbolInfo : NSObject
@property (nonatomic) Q start;
@property (nonatomic) Q size;
@property (nonatomic) NSString path;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL isAppleCode;
@property (nonatomic) NSString cpuArch;
- (id)path;
- (void)setStart:;
- (void)setName:;
- (BOOL)isAppleCode;
- (unsigned long long)start;
- (void)setPath:;
- (id)initWithAddress:size:for:;
- (void)setCpuArch:;
- (id)get_uuid;
- (id)initWithSharedCache:atBaseAddress:;
- (id)cpuArch;
- (void).cxx_destruct;
- (void)setIsAppleCode:;
- (id)name;
- (void)setSize:;
- (unsigned long long)size;
@end
