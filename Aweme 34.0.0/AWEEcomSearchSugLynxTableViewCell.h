@interface AWEEcomSearchSugLynxTableViewCell : UITableViewCell
@property (nonatomic) <AnnieXCardModelProtocol> cardModel;
@property (nonatomic) UIView<AnnieXContainerBaseProtocol> cardView;
@property (nonatomic) BOOL isTemplateLoadSuccess;
@property (nonatomic) BOOL needReloadTemplate;
@property (nonatomic) <AWEEcomSearchSugLynxTableViewCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didFinishLoadWithURL:;
- (id)cardModel;
- (void)setCardModel:;
- (void)setupAnnieX:globalProps:;
- (BOOL)isTemplateLoadSuccess;
- (void)setNeedReloadTemplate:;
- (void)setIsTemplateLoadSuccess:;
- (BOOL)needReloadTemplate;
- (void)updateWithLynxSchema:globalProps:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)cardView;
- (void)setCardView:;
@end
