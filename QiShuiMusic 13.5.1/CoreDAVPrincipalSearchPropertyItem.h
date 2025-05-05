@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem
@property (nonatomic) CoreDAVItem prop;
@property (nonatomic) CoreDAVLeafItem descriptionItem;
- (id)prop;
- (id)init;
- (void)setProp:;
- (void).cxx_destruct;
- (id)description;
- (void)setDescriptionItem:;
- (id)descriptionItem;
+ (id)copyParseRules;
@end
