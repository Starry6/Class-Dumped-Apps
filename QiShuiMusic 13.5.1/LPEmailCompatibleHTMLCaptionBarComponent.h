@interface LPEmailCompatibleHTMLCaptionBarComponent : LPHTMLComponent
- (void).cxx_destruct;
- (id)initWithStyle:presentationProperties:themePath:generator:;
- (void)buildComponents;
+ (id)ruleDictionaryForStyle:;
+ (id)baseRules;
@end
