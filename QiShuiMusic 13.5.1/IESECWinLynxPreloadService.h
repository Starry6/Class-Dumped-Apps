@interface IESECWinLynxPreloadService : NSObject
@property (nonatomic) IESECWinContext context;
@property (nonatomic) IESECListKitCardPreloader preloader;
@property (nonatomic) NSMutableArray lynxSchemas;
@property (nonatomic) <IESECWinLynxCardService> lynxCardService;
@property (nonatomic) BOOL usePreload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLynxSchemas:;
- (id)lynxCardService;
- (BOOL)getUsePreload;
- (id)lynxCardProvider;
- (id)lynxSchemas;
- (void)preloadLynxCardWithTabType:;
- (void)reportLynxPreloadResult:itemType:;
- (void)setLynxCardService:;
- (void)setUsePreload:;
- (BOOL)usePreload;
- (void)usePreload:itemType:;
- (id)context;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
- (id)preloader;
- (void)setPreloader:;
@end
