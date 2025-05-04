@interface AWEECOMIMCharDetailLynxFloatCardView : UIView
@property (nonatomic) AWEECOMIMCharDetailFloatCardModel viewModel;
@property (nonatomic) AWEECOMIMLynxFloatCardViewModel lynxViewViewModel;
@property (nonatomic) AWEECOMIMLynxCardView lynxCardView;
@property (nonatomic) <AWEECOMIMCharDetailLynxFloatCardDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLynxCardView:;
- (id)lynxCardView;
- (id)lynxViewViewModel;
- (void)setLynxViewViewModel:;
- (void)updateCardSize;
- (void)setCellModel:conversation:;
- (id)delegate;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)getSizeWithModel:;
@end
