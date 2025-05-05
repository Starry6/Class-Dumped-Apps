@interface IESECListKitStickHeaderView : UICollectionReusableView
@property (nonatomic) IESECLynxCard lynxView;
@property (nonatomic) IESECLynxCardBridgeMethod dynamicDataJSB;
@property (nonatomic) <IESECLynxCardDelegate> delegate;
@property (nonatomic) q sectionIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dynamicDataJSB;
- (id)lynxView;
- (void)registerBridgesIfNeed:;
- (void)setDynamicDataJSB:;
- (void)setLynxView:;
- (void)uppdateWithNativeModel:;
- (void)viewDidAppear:sourceType:;
- (void)viewDidDisappear:sourceType:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (long long)sectionIndex;
- (void)setSectionIndex:;
- (void)setupUI;
- (void)updateWithModel:;
@end
