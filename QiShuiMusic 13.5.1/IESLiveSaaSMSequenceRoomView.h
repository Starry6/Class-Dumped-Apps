@interface IESLiveSaaSMSequenceRoomView : UIView
@property (nonatomic) HTSLiveSaaSMSequenceStore store;
@property (nonatomic) IESLiveSaaSMSequenceAnchorItem authorBtn;
@property (nonatomic) IESLiveSaaSMSequenceOfficialItem officialBtn;
@property (nonatomic) RACDisposable disposable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addCurrentView:;
- (void)setOfficialBtn:;
- (id)authorBtn;
- (void)didSetAttachingDIContext;
- (id)disposable;
- (id)officialBtn;
- (id)pluginLayoutContentSize;
- (void)pr_addObserve;
- (void)setAuthorBtn:;
- (void)setDisposable:;
- (void)updateUserData;
- (id)viewType;
- (void)dealloc;
- (void)setStore:;
- (id)initWithStore:;
- (void).cxx_destruct;
- (id)store;
- (void)setupButtons;
@end
