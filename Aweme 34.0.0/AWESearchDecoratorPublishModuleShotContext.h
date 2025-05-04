@interface AWESearchDecoratorPublishModuleShotContext : NSObject
@property (nonatomic) q publishType;
@property (nonatomic) AWESearchDecoratorPublishHelperConfigParams configParams;
@property (nonatomic) AWESearchDecoratorInnerFlowPublishParamContext innerFlowPublishContext;
@property (nonatomic) AWESearchDecoratorOuterFlowPublishParamContext outerFlowPublishContext;
- (id)configParams;
- (long long)publishType;
- (void)setPublishType:;
- (void)setConfigParams:;
- (void)setOuterFlowPublishContext:;
- (id)innerFlowPublishContext;
- (void)setInnerFlowPublishContext:;
- (id)outerFlowPublishContext;
- (void).cxx_destruct;
@end
