@interface GEOResourceRequesterRemoteProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchResources:force:manifestConfiguration:auditToken:signpostID:queue:handler:;
@end
