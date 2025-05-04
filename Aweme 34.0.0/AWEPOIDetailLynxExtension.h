@interface AWEPOIDetailLynxExtension : NSObject
@property (nonatomic) AWEPOIDetailLynxContainerBuilder lynxContainerBuilder;
@property (nonatomic) DitoGeneralContainerPageContext detailPageContext;
@property (nonatomic) AWEPOIDetailConstData constData;
@property (nonatomic) DitoPageContext context;
@property (nonatomic) <DitoExtensionContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeExtension;
- (id)constData;
- (void)setLynxContainerBuilder:;
- (id)detailPageContext;
- (id)lynxContainerBuilder;
- (id)nativeExtraDataFor:withContext:;
- (void)setupCubeModel:;
- (id)extraParamsWithCubeModel:withContext:;
- (void)bindBDXEvent:;
- (id)extraDataFor:node:;
- (void)setContainer:;
- (id)container;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
