@interface ISURLCacheConfiguration : NSObject
@property (nonatomic) Q diskCapacity;
@property (nonatomic) Q memoryCapacity;
@property (nonatomic) NSString persistentIdentifier;
- (void)setDiskCapacity:;
- (void)dealloc;
- (void)setMemoryCapacity:;
- (void)setPersistentIdentifier:;
- (id)persistentIdentifier;
- (unsigned long long)diskCapacity;
- (id)copyWithZone:;
- (unsigned long long)memoryCapacity;
@end
