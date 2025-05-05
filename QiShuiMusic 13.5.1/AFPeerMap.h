@interface AFPeerMap : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:;
- (id)objectForPeerInfo:;
- (void)setObject:forPeerInfo:;
- (void)removeObjectForPeerInfo:;
- (id)_getUUIDAndUpdateIDMapsForPeerInfo:;
- (void)_cleanUpUUIDMapsForPeerInfo:;
@end
