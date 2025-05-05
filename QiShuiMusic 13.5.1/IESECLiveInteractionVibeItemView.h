@interface IESECLiveInteractionVibeItemView : UIView
@property (nonatomic) UIView bgView;
@property (nonatomic) UIView itemView;
@property (nonatomic) IESECLiveInteractionVibeModel vibeModel;
@property (nonatomic) double itemHeight;
- (id)initWithVibeModel:height:;
- (void)setVibeModel:;
- (id)vibeModel;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
- (id)itemView;
- (void)setItemView:;
- (double)itemHeight;
- (void)setItemHeight:;
@end
