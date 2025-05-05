@interface CSContactsWrapper : NSObject
@property (nonatomic) # CNContactPropertyClass;
@property (nonatomic) NSString CNContactEmailAddressesKeyString;
- (Class)CNContactPropertyClass;
- (id)CNContactEmailAddressesKeyString;
+ (id)sharedInstance;
+ (Class)CNContactClass;
+ (Class)CNContactFetchRequestClass;
+ (Class)CNContactFormatterClass;
+ (Class)CNContactStoreClass;
+ (id)CNContactNicknameKey;
@end
