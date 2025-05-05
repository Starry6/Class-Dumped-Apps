@interface IESECListReputationConfig : NSObject
@property (nonatomic) UIFont rightTextFont;
@property (nonatomic) UIColor rightBGColor;
@property (nonatomic) UIColor borderColor;
@property (nonatomic) UIColor leftTextColor;
@property (nonatomic) UIColor rightTextColor;
- (id)leftTextColor;
- (id)rightBGColor;
- (id)rightTextColor;
- (id)rightTextFont;
- (void)setLeftTextColor:;
- (void)setRightBGColor:;
- (void)setRightTextColor:;
- (void)setRightTextFont:;
- (void)setBorderColor:;
- (id)borderColor;
- (void).cxx_destruct;
@end
