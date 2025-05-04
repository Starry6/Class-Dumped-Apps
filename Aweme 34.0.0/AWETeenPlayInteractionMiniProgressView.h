@interface AWETeenPlayInteractionMiniProgressView : UIView
@property (nonatomic) UIImageView progressDividingLine;
@property (nonatomic) UILabel progressLeftLabel;
@property (nonatomic) UILabel progressRightLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)progressLeftLabel;
- (id)progressRightLabel;
- (void)setProgressLeftLabel:;
- (void)setProgressRightLabel:;
- (void)progressValueChanged:currentDuration:totalDuration:;
- (id)progressDividingLine;
- (void)setProgressDividingLine:;
- (id)init;
- (void).cxx_destruct;
@end
