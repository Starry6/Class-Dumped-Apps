@interface AWEVideoAbstractTimeHeaderView : UIView
@property (nonatomic) YYLabel timeTipLabel;
@property (nonatomic) double timeTipLabelWidth;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) @? jumpTimeBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithModel:width:trackParams:;
- (void)setJumpTimeBlock:;
- (id)formattedJumpTimeForTime:;
- (id)jumpTimeBlock;
- (void)trackVideoAbstractWithActionType:trackParams:;
- (void)setTimeTipLabelWidth:;
- (id)timeTipLabel;
- (double)timeTipLabelWidth;
- (void)setTimeTipLabel:;
- (void)setModel:;
- (id)init;
- (id)model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (double)getHeight;
@end
