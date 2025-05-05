@interface IESLiveBridgeModel : AnnieDynamicModel
@property (nonatomic) PuzzleJSBContext iesec_PuzzleJSBContext;
@property (nonatomic) NSDictionary extraDictionary;
@property (nonatomic) PuzzleJSBContext jsbContext;
@property (nonatomic) UIView<IESLiveHybridContainerProtocol> container;
- (id)extraDictionary;
- (id)iesec_PuzzleJSBContext;
- (id)jsbContext;
- (void)setExtraDictionary:;
- (void)setJsbContext:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
- (void)setData:;
- (id)getData;
@end
