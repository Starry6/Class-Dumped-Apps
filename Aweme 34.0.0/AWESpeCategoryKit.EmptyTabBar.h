@interface AWESpeCategoryKit.EmptyTabBar : UIView
@property (nonatomic) <AWESegmentedControlContextProtocol> contextDelegate;
- (void)awelistkit_protocol_defaultConfig;
- (void)awelistkit_protocol_updateIndicatorWithScrollProgress:;
- (void)awelistkit_protocol_updateSelectedItemWithIndex:animated:;
- (long long)awelistkit_protocol_segmentedControlSelectedIndex;
- (id)init;
- (id)initWithFrame:;
- (id)contextDelegate;
- (void)setContextDelegate:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
