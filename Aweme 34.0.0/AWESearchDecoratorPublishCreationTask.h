@interface AWESearchDecoratorPublishCreationTask : NSObject
@property (nonatomic) NSString creationId;
@property (nonatomic) q publishResult;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) AWESearchDecoratorInnerFlowPublishParamContext innerFlowPublishContext;
@property (nonatomic) AWESearchDecoratorOuterFlowPublishParamContext outerFlowPublishContext;
@property (nonatomic) q publishTaskStatus;
- (id)aweme;
- (void)setAweme:;
- (id)creationId;
- (void)setCreationId:;
- (long long)publishResult;
- (void)setOuterFlowPublishContext:;
- (id)innerFlowPublishContext;
- (void)setInnerFlowPublishContext:;
- (id)outerFlowPublishContext;
- (void)setPublishTaskStatus:;
- (void)setPublishResult:;
- (long long)publishTaskStatus;
- (void).cxx_destruct;
@end
