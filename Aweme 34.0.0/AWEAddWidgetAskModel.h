@interface AWEAddWidgetAskModel : NSObject
@property (nonatomic) NSString mainDesc;
@property (nonatomic) NSString detailDesc;
@property (nonatomic) NSString leftButtonTitle;
@property (nonatomic) NSString rightButtonTitle;
@property (nonatomic) NSString contentImagePath;
@property (nonatomic) NSArray contentImageURLs;
@property (nonatomic) @? leftButtonTapCompletion;
@property (nonatomic) @? rightButtonTapCompletion;
- (id)leftButtonTitle;
- (id)rightButtonTitle;
- (void)setLeftButtonTitle:;
- (void)setRightButtonTitle:;
- (id)detailDesc;
- (id)mainDesc;
- (void)setMainDesc:;
- (void)setDetailDesc:;
- (id)contentImagePath;
- (void)setContentImagePath:;
- (id)contentImageURLs;
- (void)setContentImageURLs:;
- (id)leftButtonTapCompletion;
- (void)setLeftButtonTapCompletion:;
- (id)rightButtonTapCompletion;
- (void)setRightButtonTapCompletion:;
- (void).cxx_destruct;
@end
