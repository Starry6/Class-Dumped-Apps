@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1UserRemarkTipsNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider
@property (nonatomic) NSString uid;
@property (nonatomic) NSNumber enableAddressBook;
@property (nonatomic) NSNumber enableGreeting;
@property (nonatomic) NSNumber addressBookAccess;
@property (nonatomic) NSNumber fromSource;
@property (nonatomic) NSNumber enableMateApplyMsg;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)addressBookAccess;
- (void)setAddressBookAccess:;
- (id)enableAddressBook;
- (void)setEnableAddressBook:;
- (id)enableGreeting;
- (void)setEnableGreeting:;
- (id)fromSource;
- (void)setFromSource:;
- (id)enableMateApplyMsg;
- (void)setEnableMateApplyMsg:;
- (void)setUid:;
- (id)init;
- (id)uid;
- (void).cxx_destruct;
- (Class)modelClass;
+ (id)businessURI;
@end
