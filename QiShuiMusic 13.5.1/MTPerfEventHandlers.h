@interface MTPerfEventHandlers : MTEventHandlers
@property (nonatomic) MTPageRenderEventHandler pageRender;
@property (nonatomic) MTLoadUrlEventHandler loadUrl;
@property (nonatomic) MTFlexiblePerfEventHandler flexible;
- (void).cxx_destruct;
- (id)flexible;
- (id)pageRender;
- (void)registerDefaultEventHandlers;
- (Class)baseDataProviderClass;
- (id)loadUrl;
@end
