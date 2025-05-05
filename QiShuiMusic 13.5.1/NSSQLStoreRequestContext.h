@interface NSSQLStoreRequestContext : NSObject
@property (nonatomic) NSPersistentStoreRequest persistentStoreRequest;
@property (nonatomic) @ result;
@property (nonatomic) NSSQLRowCache rowCache;
@property (nonatomic) BOOL isWritingRequest;
- (id)result;
- (id)rowCache;
- (void)dealloc;
- (void)executePrologue;
- (void)executeEpilogue;
- (BOOL)executeRequestCore:;
- (BOOL)executeRequestUsingConnection:;
- (BOOL)isWritingRequest;
- (id)initWithRequest:context:sqlCore:;
- (void)setResult:;
- (id)persistentStoreRequest;
@end
