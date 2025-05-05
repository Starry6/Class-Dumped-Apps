@interface IESLiveSaaSPopupWebViewModel : NSObject
@property (nonatomic) NSString pageSchemeURLStr;
@property (nonatomic) IESLiveInnerPbBridgeData jsonBridgeMessage;
@property (nonatomic) RACDisposable disposable;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) NSString toastString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setToastString:;
- (void)setupDI;
- (void)didSetAttachingDIContext;
- (id)disposable;
- (id)jsonBridgeMessage;
- (id)pageSchemeURLStr;
- (void)setDisposable:;
- (void)setJsonBridgeMessage:;
- (void)setPageSchemeURLStr:;
- (void)setTrackContext:;
- (id)toastString;
- (id)trackContext;
- (void)dealloc;
- (void).cxx_destruct;
- (id)room;
- (id)initWithRoom:;
@end
