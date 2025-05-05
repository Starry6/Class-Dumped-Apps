@interface SAUITemplateTemplatedModalView : SAAceView
@property (nonatomic) NSArray templateItems;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)templateItems;
- (void)setTemplateItems:;
+ (id)templatedModalView;
+ (id)templatedModalViewWithDictionary:context:;
@end
