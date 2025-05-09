@interface IESECLiveFlashSalePopupView : UIView
@property (nonatomic) UIView bkg;
@property (nonatomic) UIView content;
@property (nonatomic) UIImageView thumbnail;
@property (nonatomic) UIImageView icon;
@property (nonatomic) UIImageView aboveTitleTagImageView;
@property (nonatomic) UIView aboveTitleTagImageViewWrapper;
@property (nonatomic) IESECLiveGoodsTitleLabel title;
@property (nonatomic) IESECLivePriceLabel price;
@property (nonatomic) UILabel count;
@property (nonatomic) UIButton done;
@property (nonatomic) UIButton close;
@property (nonatomic) MASConstraint titleTopHasAboveTagConstraint;
@property (nonatomic) MASConstraint titleTopHasNotAboveTagConstraint;
@property (nonatomic) IESECLiveGoodsModel goodsModel;
@property (nonatomic) @? closeBlock;
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) <IESECLiveFlashSalePopupViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLiveContext:;
- (id)bkg;
- (void)setBkg:;
- (id)aboveTitleTagImageView;
- (id)aboveTitleTagImageViewWrapper;
- (id)adTrackParamsWithClickStyle:;
- (void)checkThenBuy;
- (id)closeBlock;
- (void)closeClick;
- (id)curBtmModel;
- (void)doneClick;
- (id)ecomEntranceForm;
- (id)goodsModel;
- (id)liveContext;
- (id)p_basicTrackParams;
- (void)setAboveTitleTagImageView:;
- (void)setAboveTitleTagImageViewWrapper:;
- (void)setClose:;
- (void)setCloseBlock:;
- (void)setGoodsModel:;
- (void)setHasTitleAboveTag:;
- (void)setTitlAboveTag:;
- (void)setTitleTopHasAboveTagConstraint:;
- (void)setTitleTopHasNotAboveTagConstraint:;
- (void)showWithView:;
- (id)titleTopHasAboveTagConstraint;
- (id)titleTopHasNotAboveTagConstraint;
- (void)trackBSTEvent;
- (void)closeView;
- (void)setCount:;
- (id)content;
- (void)setThumbnail:;
- (void)setContent:;
- (void)setDelegate:;
- (id)icon;
- (void)setTitle:;
- (id)close;
- (void)setDone:;
- (id)initWithFrame:;
- (id)thumbnail;
- (id)title;
- (id)delegate;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)price;
- (id)count;
- (id)done;
- (void)setPrice:;
- (void)setupUI;
@end
