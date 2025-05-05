@interface SSPlistCacheObject : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)plist;
- (void)dealloc;
- (void)setPlist:;
- (id)cacheObjectTypeIdentifier;
- (id)cacheObjectDataRepresentation;
- (id)initWithCacheObjectDataRepresentation:;
+ (id)cacheObjectTypeIdentifier;
@end
