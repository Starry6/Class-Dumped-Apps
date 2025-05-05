@interface IESECPDPNetTaskComponent : IESECPDPBaseComponent
@property (nonatomic) <IESECPDPDataControllerService> dataController;
@property (nonatomic) BOOL hasCallback;
@property (nonatomic) Q status;
@property (nonatomic) BOOL hasRendered;
@property (nonatomic) @? netCallback;
@property (nonatomic) Q type;
- (void)setNetCallback:;
- (void)setHasCallback:;
- (void)callBlockFun;
- (void)containerDidRender;
- (void)loadComponent;
- (id)netCallback;
- (void)packApiBack;
- (void)setDataController:;
- (void)setStatus:;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (unsigned long long)status;
- (BOOL)hasRendered;
- (BOOL)hasCallback;
- (id)dataController;
- (void)setHasRendered:;
@end
