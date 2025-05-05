@interface AFKMemoryDescriptor : NSObject
@property (nonatomic) Q regID;
@property (nonatomic) Q token;
@property (nonatomic) AFKMemoryDescriptorManager manager;
@property (nonatomic) * buffer;
@property (nonatomic) Q capacity;
@property (nonatomic) Q length;
- (unsigned long long)capacity;
- (void)dealloc;
- (char *)buffer;
- (unsigned long long)token;
- (id)manager;
- (void).cxx_destruct;
- (unsigned long long)length;
- (void)setLength:;
- (BOOL)isEqual:;
- (id)initWithManager:capacity:buffer:;
- (id)initWithManager:capacity:token:;
- (unsigned long long)regID;
- (BOOL)mapDescriptor;
- (int)assertPower:;
- (int)assumeControl;
- (int)releaseControl:;
- (int)readBytes:size:fromOffset:;
- (int)writeBytes:size:toOffset:;
- (void)handleEnqueue;
+ (id)withManager:capacity:;
+ (id)withManager:capacity:token:;
@end
