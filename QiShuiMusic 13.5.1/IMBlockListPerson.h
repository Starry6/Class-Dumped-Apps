@interface IMBlockListPerson : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString cachedFullName;
@property (nonatomic) NSString cachedCompanyName;
@property (nonatomic) CNContact cnPerson;
@property (nonatomic) NSString fullName;
- (id)fullName;
- (id)init;
- (id)sanitizeString:;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (id)companyName;
- (id)initWithCNContact:;
- (id)cnPerson;
- (BOOL)isEqualToPerson:;
- (BOOL)isInAddressBook;
- (id)cachedFullName;
- (void)setCachedFullName:;
- (id)cachedCompanyName;
- (void)setCachedCompanyName:;
+ (id)personWithCNContact:;
@end
