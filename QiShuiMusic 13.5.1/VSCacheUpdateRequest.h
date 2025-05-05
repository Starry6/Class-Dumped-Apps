@interface VSCacheUpdateRequest : NSObject
- (void)dealloc;
- (id)modelIdentifier;
- (id)classIdentifier;
- (id)description;
- (id)initWithModelIdentifier:classIdentifier:;
- (id)coalescedRequest:;
@end
