@interface SFAccountListSectionIdentifier : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString headerText;
@property (nonatomic) NSString footerText;
- (id)headerText;
- (void)setFooterText:;
- (void)setType:;
- (unsigned long long)hash;
- (id)footerText;
- (unsigned long long)type;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithType:;
- (void)setHeaderText:;
- (id)initWithType:headerText:footerText:;
@end
