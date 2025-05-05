@interface IESLivePKScoreBarUsersView : UIView
@property (nonatomic) UIImageView firstAnimUserView;
@property (nonatomic) UIImageView secondAnimUserView;
@property (nonatomic) NSMutableArray usersViewArray;
@property (nonatomic) Q firstViewStatus;
@property (nonatomic) Q secondViewStatus;
- (unsigned long long)firstViewStatus;
- (void)addUsersViewArrayData:hasHighPriority:;
- (id)firstAnimUserView;
- (id)imageViewWithUserStyle;
- (id)initWithDIContext:;
- (id)secondAnimUserView;
- (unsigned long long)secondViewStatus;
- (void)setFirstAnimUserView:;
- (void)setFirstViewStatus:;
- (void)setSecondAnimUserView:;
- (void)setSecondViewStatus:;
- (void)setUsersViewArray:;
- (void)setupStatus:index:;
- (void)setupView:;
- (id)usersViewArray;
- (unsigned long long)viewStatus:;
- (void).cxx_destruct;
@end
