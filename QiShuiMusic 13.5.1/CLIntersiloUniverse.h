@interface CLIntersiloUniverse : NSObject
@property (nonatomic) CLSilo silo;
@property (nonatomic) CLServiceVendor vendor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)silo;
- (void).cxx_destruct;
- (id)initWithSilo:vendor:;
- (id)vendor;
+ (id)newSharedVendorUniverseWithSilo:;
+ (id)newIsolatedUniverseWithOnlySilo:;
@end
