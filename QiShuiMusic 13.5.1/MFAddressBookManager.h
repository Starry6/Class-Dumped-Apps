@interface MFAddressBookManager : NSObject
- (void)removeClient:;
- (void)addClient:;
- (id)init;
- (void)dealloc;
- (id)addressBook;
- (void).cxx_destruct;
- (id)_clientsArray;
- (void)_handleAddressBookChangeNotification;
- (void)_handleAddressBookPrefsChangeNotification;
+ (id)sharedManager;
+ (BOOL)isAuthorizedToUseAddressBook;
@end
