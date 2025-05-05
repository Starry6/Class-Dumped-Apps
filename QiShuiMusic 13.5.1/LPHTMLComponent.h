@interface LPHTMLComponent : NSObject
@property (nonatomic) LPLinkHTMLGenerator generator;
@property (nonatomic) DOMElement element;
@property (nonatomic) NSString themePath;
- (id)element;
- (id)generator;
- (void).cxx_destruct;
- (void)addChild:;
- (id)initWithTagName:themePath:generator:;
- (id)childThemePathWithName:;
- (id)themePath;
+ (id)ruleDictionaryForStyle:;
@end
