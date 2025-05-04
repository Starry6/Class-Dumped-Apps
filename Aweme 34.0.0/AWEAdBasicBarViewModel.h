@interface AWEAdBasicBarViewModel : AWETemplateBaseViewModel
@property (nonatomic) AWETemplateBarContext context;
@property (nonatomic) AWETemplateBarModel adBarModel;
- (void)trackForTemplateViewShow;
- (id)adBarModel;
- (id)initWithData:scene:context:;
- (void)viewDidTriggerAction:;
- (void)setAdBarModel:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (BOOL)shouldActiveWithData:scene:context:;
@end
