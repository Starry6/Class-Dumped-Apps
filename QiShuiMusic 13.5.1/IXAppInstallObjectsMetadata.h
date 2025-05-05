@interface IXAppInstallObjectsMetadata : NSObject
@property (nonatomic) Q count;
@property (nonatomic) NSHashTable instances;
- (void)setCount:;
- (id)init;
- (void)addObject:;
- (id)instances;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)setInstances:;
@end
