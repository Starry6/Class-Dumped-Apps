@interface AWEHPListKitControllerManagerConfig : NSObject
@property (nonatomic) BOOL reuseItemController;
@property (nonatomic) <AWEHPListKitControllerModelProtocol> originModel;
@property (nonatomic) @? moduleContextBlock;
@property (nonatomic) @? itemContextBlock;
@property (nonatomic) @? createItemCompleteBlock;
@property (nonatomic) @? loadCompleteBlock;
- (id)originModel;
- (void)setOriginModel:;
- (BOOL)reuseItemController;
- (void)setReuseItemController:;
- (id)moduleContextBlock;
- (void)setModuleContextBlock:;
- (id)itemContextBlock;
- (void)setItemContextBlock:;
- (id)createItemCompleteBlock;
- (void)setCreateItemCompleteBlock:;
- (id)loadCompleteBlock;
- (void)setLoadCompleteBlock:;
- (id)description;
- (void).cxx_destruct;
@end
