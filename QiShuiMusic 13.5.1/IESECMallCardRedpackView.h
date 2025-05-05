@interface IESECMallCardRedpackView : UIView
@property (nonatomic) UIImageView redpackImageView;
@property (nonatomic) UILabel redpackNumber;
@property (nonatomic) UILabel redpackUnit;
@property (nonatomic) NSString bizTag;
@property (nonatomic) NSString sceneTag;
- (void)setRedpackUnit:;
- (void)viewWillDisplay;
- (id)bizTag;
- (id)redpackImageView;
- (id)redpackNumber;
- (id)redpackUnit;
- (id)sceneTag;
- (void)setBizTag:;
- (void)setRedpackImageView:;
- (void)setRedpackNumber:;
- (void)setSceneTag:;
- (void)viewDidEndDisplay;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:;
@end
