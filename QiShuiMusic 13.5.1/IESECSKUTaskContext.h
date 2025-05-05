@interface IESECSKUTaskContext : NSObject
@property (nonatomic) <IESECSKUContextProtocol> skuContext;
@property (nonatomic) IESECSKUTaskInfoModel taskInfoModel;
@property (nonatomic) IESECSKUShowRequest showRequest;
@property (nonatomic) UIView<IESECSKUViewProtocol> attachedSKUView;
- (id)attachedSKUView;
- (void)setShowRequest:;
- (id)initWithShowRequest:;
- (void)setAttachedSKUView:;
- (void)setSkuContext:;
- (void)setTaskInfoModel:;
- (id)showRequest;
- (id)skuContext;
- (id)taskInfoModel;
- (id)taskInfoModelFromSKUInfo:;
- (void)updateTaskInfoModel:;
- (void).cxx_destruct;
- (void)setupData;
@end
