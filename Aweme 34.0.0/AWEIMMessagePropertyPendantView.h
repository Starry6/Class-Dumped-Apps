@interface AWEIMMessagePropertyPendantView : UIView
@property (nonatomic) NSMutableArray viewArray;
@property (nonatomic) NSArray viewModelList;
@property (nonatomic) <AWEIMMessagePropertyPendantViewDelegate> delegate;
- (id)viewModelList;
- (void)setViewModelList:;
- (void)prepareViewsWithViewModelList:;
- (id)delegate;
- (id)initWithFrame:;
- (void)clearContent;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setViewArray:;
- (id)viewArray;
@end
