@interface VCPObjectPool : NSObject
- (id)initWithAllocator:;
- (void)returnObject:;
- (id)getObject;
- (void).cxx_destruct;
+ (id)objectPoolWithAllocator:;
@end
