@interface LPEmailCompatibleHTMLVerticalTextStackComponent : LPHTMLComponent
- (void).cxx_destruct;
- (id)initWithStyle:presentationProperties:themePath:generator:;
- (void)buildComponents;
- (id)componentForRow:style:name:;
+ (id)ruleDictionaryForStyle:;
+ (id)baseRules;
@end
