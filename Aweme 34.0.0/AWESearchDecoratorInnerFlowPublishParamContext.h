@interface AWESearchDecoratorInnerFlowPublishParamContext : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) UIViewController<AWEAwemeNewDetailTableContainerProtocol> innerFlowTableDelegate;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setEnterFrom:;
- (void)setLogExtra:;
- (id)logExtra;
- (id)enterFrom;
- (void)setInnerFlowTableDelegate:;
- (id)innerFlowTableDelegate;
- (void).cxx_destruct;
@end
