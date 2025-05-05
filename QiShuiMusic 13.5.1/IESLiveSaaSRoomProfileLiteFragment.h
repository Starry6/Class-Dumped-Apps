@interface IESLiveSaaSRoomProfileLiteFragment : IESLiveRoomComponent
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) IESLiveSaaSComponentContext componentContext;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL enableGuideView;
@property (nonatomic) RACScopedDisposable disposable;
@property (nonatomic) <IESLiveSaaSLayoutContainerProvider> containerProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableGuideView;
- (id)disposable;
- (void)setContainerProvider:;
- (void)setDisposable:;
- (void)setEnableGuideView:;
- (BOOL)visible;
- (void)setVisible:;
- (id)containerProvider;
- (void).cxx_destruct;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
