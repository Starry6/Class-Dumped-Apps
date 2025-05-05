@interface BDALokiBaseItem : NSObject
@property (nonatomic) NSArray jsBridges;
@property (nonatomic) UIView<BDXKitViewProtocol> kitView;
@property (nonatomic) BDALokiModel lokiModel;
@property (nonatomic) NSObject<BDALokiBaseItemDelegate> delegate;
@property (nonatomic) BDALokiProfile lokiProfile;
@property (nonatomic) BDALokiConfiguration lokiConfig;
- (id)kitView;
- (void)setLokiProfile:;
- (id)jsBridges;
- (id)lokiConfig;
- (id)lokiModel;
- (id)lokiProfile;
- (void)sendEvent:params:callback:;
- (void)setJsBridges:;
- (void)setKitView:;
- (void)setLokiConfig:;
- (void)setLokiModel:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)reset;
- (void)render;
- (id)itemView;
- (void)removeItem;
+ (id)generateLokiItemWithModel:;
@end
