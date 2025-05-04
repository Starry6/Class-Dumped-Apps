@interface AWEGrouponLifeMallFeedsExtension : NSObject
@property (nonatomic) NSString sessionID;
@property (nonatomic) DitoPageContext context;
@property (nonatomic) <DitoExtensionContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)libraConfigWithScene:;
- (void)didLoadPageModel:;
- (void)setSessionID:;
- (void)setContainer:;
- (id)container;
- (void)viewDidLoad;
- (id)sessionID;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (id)commonRequestParamsFromSource:pageContext:;
@end
