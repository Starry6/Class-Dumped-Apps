@interface AWESearchAIGCHistoryTipsView : AWESearchCachalotBaseCardView
@property (nonatomic) UIView tipsLeftLine;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIView tipsRightLine;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (id)tipsLeftLine;
- (id)tipsRightLine;
- (void)setTipsLeftLine:;
- (void)setTipsRightLine:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)componentView;
- (void)createUI;
+ (id)sizeWithViewModel:width:;
@end
