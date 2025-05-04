@interface AWENoticeInteractionBaseContainer : UIView
@property (nonatomic) AWENoticeInteractionCellViewModel cellModel;
- (void)setCellModel:;
- (void)configWithCellModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (id)initWithCoder:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)cellModel;
@end
