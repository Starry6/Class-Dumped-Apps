@interface IMBlockListItem : NSObject
@property (nonatomic) IMBlockListPerson person;
@property (nonatomic) NSString address;
@property (nonatomic) ^v cmfItem;
@property (nonatomic) NSString cachedFormattedHandle;
@property (nonatomic) NSString cachedFormattedPersonName;
@property (nonatomic) CNContact cnPerson;
- (id)fullName;
- (void)dealloc;
- (void)setAddress:;
- (void).cxx_destruct;
- (void)setPerson:;
- (id)person;
- (id)address;
- (id)formattedAddress;
- (id)initWithPerson:address:cmfItemRef:;
- (id)initWithCNContact:address:cmfItemRef:;
- (id)cnPerson;
- (void)lookupPerson;
- (id)formattedHandle;
- (BOOL)isEqualToBlockListItem:;
- (id)cmfItem;
- (void)setCmfItem:;
- (id)cachedFormattedHandle;
- (void)setCachedFormattedHandle:;
- (id)cachedFormattedPersonName;
- (void)setCachedFormattedPersonName:;
@end
