@interface FBSLazyApplicationInfoProvider : NSObject
@property (nonatomic) # applicationInfoSubclass;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)applicationInfoForBundleIdentifier:;
- (id)applicationInfoForAuditToken:;
- (Class)applicationInfoSubclass;
- (void)setApplicationInfoSubclass:;
@end
