@interface CNUIContactsAuthorizationStore : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) <CNTCCSettings> tccSettings;
@property (nonatomic) <CNUICoreRemoteApplicationIconFetching> iconFetcher;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)records;
- (id)init;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:;
- (void).cxx_destruct;
- (id)contactsAuthorizationModel;
- (id)contactsAuthorizationModelByLoadingIconsOfRemoteItemsInModel:;
- (id)saveContactsAuthorizationModel:;
- (id)recordForBundleIdentifier:;
- (id)tccSettings;
- (id)iconFetcher;
@end
