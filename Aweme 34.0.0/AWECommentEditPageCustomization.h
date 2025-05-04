@interface AWECommentEditPageCustomization : NSObject
@property (nonatomic) <AWECommentEditPageCustomizationInjectionProtocol> injectionProtocol;
@property (nonatomic) AWECommentEditPageScenarioDraftModel scenarioDraftModel;
@property (nonatomic) @? finishHandler;
- (id)initWithInjectionProtocol:;
- (void)setScenarioDraftModel:;
- (id)injectionProtocol;
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:dataContext:;
- (id)scenarioDraftModel;
- (void)setInjectionProtocol:;
- (void)setFinishHandler:;
- (id)finishHandler;
- (void).cxx_destruct;
- (id)businessIdentifier;
@end
