@interface FSWebKitHostSupportManager : NSObject
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)listener;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)setListener:;
+ (id)sharedManager;
@end
