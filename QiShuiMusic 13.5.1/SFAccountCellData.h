@interface SFAccountCellData : NSObject
@property (nonatomic) WBSSavedAccount savedAccount;
@property (nonatomic) WBSPasswordWarning warning;
@property (nonatomic) NSString highLevelDomain;
@property (nonatomic) NSString searchPattern;
@property (nonatomic) BOOL savedAccountIsOnlySavedAccountForHighLevelDomain;
- (unsigned long long)hash;
- (id)warning;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithSavedAccount:warning:searchPattern:savedAccountIsOnlySavedAccountForHighLevelDomain:;
- (id)highLevelDomain;
- (id)savedAccount;
- (id)searchPattern;
- (BOOL)savedAccountIsOnlySavedAccountForHighLevelDomain;
+ (id)accountCellDataWithSavedAccount:warning:searchPattern:savedAccountIsOnlySavedAccountForHighLevelDomain:;
@end
