@interface CoreDAVPropFindItem : CoreDAVItem
@property (nonatomic) CoreDAVItemWithNoChildren propName;
@property (nonatomic) CoreDAVItemWithNoChildren allProp;
@property (nonatomic) CoreDAVItem include;
@property (nonatomic) CoreDAVItem prop;
- (id)prop;
- (id)init;
- (void)setProp:;
- (void).cxx_destruct;
- (id)description;
- (id)include;
- (void)setInclude:;
- (id)propName;
- (void)setPropName:;
- (void)setAllProp:;
- (id)allProp;
+ (id)copyParseRules;
@end
