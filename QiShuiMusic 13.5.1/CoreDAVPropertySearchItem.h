@interface CoreDAVPropertySearchItem : CoreDAVItem
@property (nonatomic) CoreDAVLeafItem prop;
@property (nonatomic) NSString match;
@property (nonatomic) NSString matchTypeAttribute;
- (int)wellKnownPrincipalSearchType;
- (void)write:;
- (id)prop;
- (id)init;
- (void)setProp:;
- (id)match;
- (void)setMatch:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSearchPropertyNameSpace:andName:;
- (id)matchTypeAttribute;
- (void)setMatchTypeAttribute:;
@end
