@interface AWEIMSkylightCellDotPresenter : AWEIMSkylightBasePresenter
@property (nonatomic) Q componentViewPosition;
@property (nonatomic) UIColor dotColor;
@property (nonatomic) NSString dotColorStr;
@property (nonatomic) NSURL dotUrl;
@property (nonatomic) UIImage placeHolder;
- (void)updateView:;
- (unsigned long long)componentViewPosition;
- (id)componentViewSize;
- (void)setComponentViewPosition:;
- (void)setDotUrl:;
- (void)configWithDotInfo:;
- (id)dotUrl;
- (id)dotColorStr;
- (void)setDotColorStr:;
- (void).cxx_destruct;
- (id)dotColor;
- (void)setDotColor:;
- (id)createView;
- (void)setPlaceHolder:;
- (id)placeHolder;
@end
