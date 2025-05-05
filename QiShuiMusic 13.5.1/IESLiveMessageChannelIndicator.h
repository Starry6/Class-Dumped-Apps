@interface IESLiveMessageChannelIndicator : UIView
@property (nonatomic) Q count;
@property (nonatomic) UIView indicatorView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)drawMaskPath;
- (id)initWithPageCount:;
- (id)pluginLayoutContentSize;
- (void)scrollToFirstPage;
- (void)scrollWithOffset:;
- (void)setCount:;
- (id)viewType;
- (void).cxx_destruct;
- (id)indicatorView;
- (unsigned long long)count;
- (void)setIndicatorView:;
- (void)setupUI;
- (void)scrollToIndex:animated:;
@end
