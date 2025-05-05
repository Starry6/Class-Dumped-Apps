@interface CNVCardMutableNameComponents : CNVCardNameComponents
@property (nonatomic) NSString formattedName;
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
@property (nonatomic) NSString middleName;
@property (nonatomic) NSString title;
@property (nonatomic) NSString suffix;
@property (nonatomic) NSString companyName;
@property (nonatomic) BOOL isCompany;
- (void)setLastName:;
- (void)setFirstName:;
- (void)setTitle:;
- (void)setSuffix:;
- (void)setMiddleName:;
- (void)setFormattedName:;
- (void)setCompanyName:;
- (void)setIsCompany:;
@end
