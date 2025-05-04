@interface AWEEnterpriseMessageBaseView : UIView
@property (nonatomic) NSDate startLoadTimeDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) {CGSize=dd} currentContentSize;
@property (nonatomic) @? didClickSubmitBlock;
@property (nonatomic) @? didUpdateCellContentSizeBlock;
@property (nonatomic) @? loadDurationBlock;
@property (nonatomic) @? didFinishLynxLoadBlock;
- (void)bindViewModel:;
- (void)constraintSubviews;
- (id)didClickSubmitBlock;
- (void)setStartLoadTimeDate:;
- (id)startLoadTimeDate;
- (id)loadDurationBlock;
- (id)didUpdateCellContentSizeBlock;
- (void)setDidClickSubmitBlock:;
- (void)setDidUpdateCellContentSizeBlock:;
- (void)setLoadDurationBlock:;
- (id)currentContentSize;
- (id)initWithFrame:;
- (void)setCurrentContentSize:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
@end
