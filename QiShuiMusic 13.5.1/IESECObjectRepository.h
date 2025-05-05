@interface IESECObjectRepository : NSObject
- (void)removeObjectForIdentifier:;
- (id)init;
- (id)objectForIdentifier:;
- (id)saveObject:;
- (void).cxx_destruct;
+ (id)sharedRepository;
@end
