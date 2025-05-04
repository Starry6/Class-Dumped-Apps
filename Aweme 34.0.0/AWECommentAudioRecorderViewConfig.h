@interface AWECommentAudioRecorderViewConfig : NSObject
@property (nonatomic) {CGPoint=dd} startpoint;
@property (nonatomic) UIView startView;
@property (nonatomic) UIView inputVCView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} inputVCFrame;
- (void)setInputVCFrame:;
- (void)setStartpoint:;
- (id)inputVCFrame;
- (id)startpoint;
- (id)inputVCView;
- (void)setInputVCView:;
- (void).cxx_destruct;
- (void)setStartView:;
- (id)startView;
@end
