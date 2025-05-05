@interface BMSharedMemory : NSObject
@property (nonatomic) BMFileAttributes attributes;
@property (nonatomic) ^v address;
@property (nonatomic) Q size;
- (void)dealloc;
- (id)initWithCoder:;
- (id)attributes;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)address;
- (unsigned long long)size;
- (id)initWithRegion:size:attributes:;
+ (BOOL)supportsSecureCoding;
@end
