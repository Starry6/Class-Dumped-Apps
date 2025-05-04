@interface AWEECOMIMBaseCardCell : AWEECOMIMBaseUserMsgCell
@property (nonatomic) AWEECOMIMCardBaseView cardView;
@property (nonatomic) AWEECOMIMCardBaseView view;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCellModel:;
- (void)didCustomInit;
- (void)baseCardViewDidClickImage:imageItemModel:clickChainTask:;
- (void)baseCardViewDidClickQuestion:;
- (void)baseCardViewDidSendSelectableMsgCardMessage:;
- (void)cardViewDidChangeHeight:;
- (void)baseCardViewDidShowFullText:isShowFullText:;
- (BOOL)canTrackCellDetailDisplay;
- (id)view;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
+ (void)getSize:withModel:;
@end
