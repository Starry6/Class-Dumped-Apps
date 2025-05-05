@interface IESECLiveElementBlockBubbleView : UIView
@property (nonatomic) IESECPopoverDialog cellLongPressBubble;
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) IESECLiveGoodsModel goodsModel;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) NSTimer cellLongPressBubbleTimer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLiveContext:;
- (id)cellLongPressBubble;
- (id)cellLongPressBubbleTimer;
- (void)combinationBlockClickAction:;
- (void)combinationBlockShowWith:;
- (id)goodsModel;
- (id)initWithLiveContext:goodsModel:dismissBlock:;
- (id)liveContext;
- (void)removeTimer;
- (void)setCellLongPressBubble:;
- (void)setCellLongPressBubbleTimer:;
- (void)setGoodsModel:;
- (void)showLongPressBubbleInParentView:bubbleData:duration:;
- (void)dismiss;
- (void)dealloc;
- (void).cxx_destruct;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
