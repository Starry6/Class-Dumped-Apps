@interface AWERVListTagView : UIView
@property (nonatomic) UIView container;
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel contentLabel;
- (void)updateWithTagTypeAndStyle:style:content:;
- (id)iconImageWithTagType:;
- (void)setupUIWithIcon:;
- (void)updateWithTagType:content:isWaterFlow:;
- (void)setContainer:;
- (id)container;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)contentLabel;
- (void)setContentLabel:;
@end
