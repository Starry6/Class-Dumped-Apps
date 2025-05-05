@interface SAUIHtmlView : SAAceView
@property (nonatomic) NSArray commands;
@property (nonatomic) NSString descriptionText;
@property (nonatomic) NSString html;
- (id)groupIdentifier;
- (id)descriptionText;
- (id)commands;
- (id)encodedClassName;
- (void)setDescriptionText:;
- (void)setCommands:;
- (id)html;
- (void)setHtml:;
+ (id)htmlView;
+ (id)htmlViewWithDictionary:context:;
@end
