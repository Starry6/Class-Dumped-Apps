@interface CADOperationGroup : NSObject
@property (nonatomic) ClientConnection conn;
- (id)conn;
- (id)initWithClientConnection:;
- (void).cxx_destruct;
- (BOOL)accessGranted;
+ (id)whitelistedBundles;
+ (BOOL)requiresEventAccess;
@end
