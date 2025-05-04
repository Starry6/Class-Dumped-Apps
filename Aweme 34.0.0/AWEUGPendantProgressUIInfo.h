@interface AWEUGPendantProgressUIInfo : NSObject
@property (nonatomic) UIColor progressColor;
@property (nonatomic) UIColor progressBackgroundColor;
@property (nonatomic) double progressWidth;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) Q progressType;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} expandUIFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} foldUIFrame;
- (id)expandUIFrame;
- (id)foldUIFrame;
- (void)setExpandUIFrame:;
- (void)setFoldUIFrame:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)progressBackgroundColor;
- (id)progressColor;
- (void)setProgressBackgroundColor:;
- (void)setProgressColor:;
- (unsigned long long)progressType;
- (void)setProgressType:;
- (double)progressWidth;
- (void)setProgressWidth:;
@end
