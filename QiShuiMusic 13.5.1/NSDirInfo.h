@interface NSDirInfo : NSMutableDictionary
- (void)HMDP_removeObjectForKey:;
- (void)HMDP_setObject:forKey:;
- (id)initWithDictionary:copyItems:;
- (id)init;
- (void)setObject:forKey:;
- (void)dealloc;
- (id)initWithDictionary:;
- (id)initWithObjects:forKeys:count:;
- (id)keyEnumerator;
- (id)initWithContentsOfFile:;
- (id)objectForKey:;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (id)initWithCapacity:;
- (unsigned long long)writePath:docInfo:errorHandler:remapContents:hardLinkPath:;
- (id)serializeToData;
@end
