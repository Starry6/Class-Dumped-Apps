@interface AWEGenericTemplatePreparation : NSObject
@property (nonatomic) AWEGenericTemplateApplierContext context;
@property (nonatomic) NSArray middlewares;
- (void)processTemplate:applyConfig:completion:;
- (void)setupMiddlewares;
- (void)processTemplate:applyConfig:index:completion:;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setMiddlewares:;
- (id)middlewares;
@end
