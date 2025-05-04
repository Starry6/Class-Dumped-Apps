@interface AWEDCFeedCommonLynxDislikeViewModel : NSObject
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (nonatomic) double panelWidth;
@property (nonatomic) double panelHeight;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cellFrame;
@property (nonatomic) @? feedbackBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)panelHeight;
- (void)setPanelHeight:;
- (id)feedbackBlock;
- (void)setFeedbackBlock:;
- (void)setupUIInfo;
- (id)cellFrame;
- (void)setCellFrame:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (double)containerWidth;
- (double)panelWidth;
- (void)setPanelWidth:;
- (double)containerHeight;
- (void)setContainerHeight:;
- (void)setContainerWidth:;
@end
