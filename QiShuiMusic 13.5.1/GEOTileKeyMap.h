@interface GEOTileKeyMap : NSObject
- (id)init;
- (void)setObject:forKey:;
- (void)dealloc;
- (id)initWithMapType:capacity:;
- (id)objectForKey:;
- (void)reserveCapacity:;
- (id)contentsDescription;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (id)initWithMapType:;
- (id)copyWithZone:;
@end
