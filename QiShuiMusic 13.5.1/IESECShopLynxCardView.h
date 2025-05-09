@interface IESECShopLynxCardView : UIView
@property (nonatomic) IESECLynxCard lynxCard;
@property (nonatomic) IESECLynxCardModel cardModel;
@property (nonatomic) UIVisualEffectView effectView;
@property (nonatomic) BOOL hasFinishLoad;
@property (nonatomic) @? updateBlk;
@property (nonatomic) <IESECShopLynxCardViewDelegate> delegate;
@property (nonatomic) IESECServiceProxy<IESECShopThemeService> themeService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__setup;
- (void)lynxCard:didReceivePerformance:;
- (id)cardModel;
- (void)createLynxCardWithUrl:preferredFrame:initialData:;
- (BOOL)hasFinishLoad;
- (id)lynxCard;
- (void)lynxCard:didFinishLoadWithURL:;
- (void)lynxCard:didLoadFail:;
- (void)lynxCard:receiveError:;
- (void)lynxCard:sizeDidChanged:;
- (void)sendEvent:params:;
- (void)setCardModel:;
- (void)setHasFinishLoad:;
- (void)setLynxCard:;
- (void)setThemeService:;
- (void)setUpdateBlk:;
- (id)themeService;
- (id)updateBlk;
- (id)effectView;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)initWithFrame:;
- (void)updateData:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setEffectView:;
@end
