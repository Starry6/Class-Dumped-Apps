@interface IESLiveSaaSTemplate : NSObject
@property (nonatomic) NSMapTable templates;
- (Class)classForTemplate:;
- (Class)classForTemplate:slot:;
- (void)loadTemplateRegistry;
- (id)objectForTemplate:;
- (id)objectForTemplate:params:;
- (id)objectForTemplate:params:slot:;
- (id)objectForTemplate:slot:;
- (void)registerTemplate:impl:slot:;
- (id)tableForTemplate:;
- (void)setTemplates:;
- (void).cxx_destruct;
- (id)templates;
+ (id)shared;
@end
