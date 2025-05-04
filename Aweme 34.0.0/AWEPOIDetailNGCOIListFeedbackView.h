@interface AWEPOIDetailNGCOIListFeedbackView : UIView
@property (nonatomic) UIButton closeButton;
@property (nonatomic) NSMutableArray itemViews;
@property (nonatomic) @? itemBlock;
@property (nonatomic) @? closeBlock;
@property (nonatomic) NSArray feedbacks;
- (void)setCloseBlock:;
- (void)clickCloseButton;
- (id)closeBlock;
- (void)setItemBlock:;
- (id)itemBlock;
- (id)initWithFrame:;
- (void)setFeedbacks:;
- (void).cxx_destruct;
- (id)feedbacks;
- (void)setCloseButton:;
- (id)closeButton;
- (id)itemViews;
- (void)setItemViews:;
@end
