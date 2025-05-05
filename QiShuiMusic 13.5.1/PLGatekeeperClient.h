@interface PLGatekeeperClient : NSObject
- (void).cxx_destruct;
- (void)getLibrarySizes:;
- (void)getLibrarySizesFromDB:handler:;
+ (id)sharedInstance;
@end
