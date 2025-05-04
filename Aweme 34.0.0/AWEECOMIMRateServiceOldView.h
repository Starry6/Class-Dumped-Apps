@interface AWEECOMIMRateServiceOldView : UIView
@property (nonatomic) AWEECOMIMRateServiceModel model;
@property (nonatomic) AWEECOMIMRateEmotionOldView emotionView;
@property (nonatomic) <AWEECOMIMRateServiceViewDelegate> delegate;
- (id)emotionView;
- (void)updateRateServiceViewWithModel:maxWidth:;
- (double)currentViewHeightWithModel:;
- (void)setEmotionView:;
- (void)setModel:;
- (void)keyboardWillHide:;
- (id)delegate;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)registerNotifications;
- (void)setDelegate:;
- (void)keyboardWillShow:;
+ (BOOL)checkIsIn24Hours:;
+ (double)getCurrentHeightWithModel:maxWidth:;
+ (double)tagInputViewPadding;
+ (double)bottomPadding;
@end
