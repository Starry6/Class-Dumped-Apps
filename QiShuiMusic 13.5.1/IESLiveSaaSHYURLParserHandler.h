@interface IESLiveSaaSHYURLParserHandler : NSObject
@property (nonatomic) IESLiveSaaSHYRouterIMP hybridRouter;
@property (nonatomic) IESLiveSaaSPuzzleHybridRouter puzzleRouter;
@property (nonatomic) PuzzleSchemaParamsHandler schemaHandler;
- (id)buildCommonParamsWithOrigin:;
- (id)getComponentsWithURLString:;
- (id)getQueryItemsWithURLString:;
- (id)handleURLQuerys:params:;
- (id)hybridRouter;
- (id)parserWithParams:fromInside:;
- (id)puzzleRouter;
- (id)schemaHandler;
- (void)setHybridRouter:;
- (void)setPuzzleRouter:;
- (void)setSchemaHandler:;
- (void).cxx_destruct;
@end
