@interface CoreDAVItemWithHrefChildItem : CoreDAVItem
@property (nonatomic) CoreDAVHrefItem href;
- (void)setHref:;
- (id)href;
- (void)write:;
- (void).cxx_destruct;
- (id)description;
+ (id)copyParseRules;
@end
