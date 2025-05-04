@interface AWEECOMIMLynxCardCell : AWEECOMIMBaseUserMsgCell
@property (nonatomic) AWEECOMIMLynxCardViewModel cellModel;
@property (nonatomic) AWEECOMIMLynxCardView lynxCardView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCellModel:;
- (void)didCustomInit;
- (void)willDisplayByMessageVisible;
- (void)didEndDisplayingByMessageVisible;
- (void)setLynxCardView:;
- (id)lynxCardView;
- (void)updateCardSize;
- (void)inputCompatMethodNotify:;
- (void)viewControllerDidDisappear;
- (void)viewControllerWillAppear;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (void)getSize:withModel:;
@end
