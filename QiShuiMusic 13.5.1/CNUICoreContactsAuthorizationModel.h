@interface CNUICoreContactsAuthorizationModel : NSObject
@property (nonatomic) NSArray items;
@property (nonatomic) NSArray changedItems;
@property (nonatomic) NSArray remoteItems;
@property (nonatomic) NSArray bundleIdentifiers;
@property (nonatomic) BOOL isEmpty;
- (id)initWithItems:;
- (id)init;
- (BOOL)isEmpty;
- (id)items;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)bundleIdentifiers;
- (id)changedItems;
- (id)remoteItems;
- (id)itemWithMatchingBundleIdentifier:;
- (id)modelByCopyingItemsWithBundleIdentifier:;
- (id)modelByCopyingIconsOfRemoteItemsFromModel:;
+ (BOOL)supportsSecureCoding;
@end
