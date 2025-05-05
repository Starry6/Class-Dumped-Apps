@interface NSItemRepresentationLoadResult : NSObject
@property (nonatomic) NSString archivedObjectClassName;
@property (nonatomic) NSData data;
@property (nonatomic) NSSecurityScopedURLWrapper urlWrapper;
@property (nonatomic) @? cleanupHandler;
@property (nonatomic) NSError error;
@property (nonatomic) # archivedObjectClass;
@property (nonatomic) BOOL wasOpenedInPlace;
- (void)dealloc;
- (id)data;
- (id)urlWrapper;
- (void)setError:;
- (id)error;
- (void)setUrlWrapper:;
- (void)setData:;
- (id)copyWithZone:;
- (id)copyWithData:urlWrapper:cleanupHandler:error:;
- (id)archivedObjectClassName;
- (void)setArchivedObjectClassName:;
- (id)cleanupHandler;
- (void)setCleanupHandler:;
- (Class)archivedObjectClass;
- (void)setArchivedObjectClass:;
- (BOOL)wasOpenedInPlace;
- (void)setWasOpenedInPlace:;
+ (id)resultWithError:;
+ (id)resultWithData:urlWrapper:cleanupHandler:error:;
@end
