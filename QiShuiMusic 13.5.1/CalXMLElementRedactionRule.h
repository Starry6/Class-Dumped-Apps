@interface CalXMLElementRedactionRule : NSObject
@property (nonatomic) NSInteger elementName;
@property (nonatomic) NSInteger content;
@property (nonatomic) NSInteger cdata;
@property (nonatomic) NSDictionary attributes;
- (int)content;
- (void)setContent:;
- (void)setAttributes:;
- (id)attributes;
- (int)elementName;
- (void).cxx_destruct;
- (void)setElementName:;
- (id)redactionRuleForAttribute:;
- (int)cdata;
- (void)setCdata:;
@end
