@interface AWEAddressBookResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray addressBook;
@property (nonatomic) NSArray keyList;
- (void)setKeyList:;
- (void)setAddressBook:;
- (id)keyList;
- (void).cxx_destruct;
- (id)addressBook;
+ (id)keyListJSONTransformer;
+ (id)addressBookJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
