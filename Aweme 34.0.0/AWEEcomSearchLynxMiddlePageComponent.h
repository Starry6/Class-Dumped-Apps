@interface AWEEcomSearchLynxMiddlePageComponent : NSObject
@property (nonatomic) AWEEcomSearchLynxEngine lynxEngine;
@property (nonatomic) AWEDynamicPatchModel model;
@property (nonatomic) AWEEcomSearchViewModel searchViewModel;
@property (nonatomic) AWEEcomSearchLynxMiddleViewController rootViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)searchViewModel;
- (void)setSearchViewModel:;
- (void)lynxEngineDidMount:;
- (id)initWithModel:andRootViewController:;
- (id)lynxEngine;
- (void)setLynxEngine:;
- (void)setModel:;
- (id)init;
- (void)setRootViewController:;
- (id)model;
- (void).cxx_destruct;
- (id)rootViewController;
@end
