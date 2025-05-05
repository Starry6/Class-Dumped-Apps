@interface SSPlistCacheObjectFactory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cachedObjectWithDataRepresentation:typeIdentifier:;
- (BOOL)supportsTypeIdentifier:;
@end
