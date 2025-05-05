@interface IESLivePKScoreBarConfig : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} containerFrame;
@property (nonatomic) NSString leftScoreColorName;
@property (nonatomic) NSString rightScoreColorName;
@property (nonatomic) NSString leftBackgroundColorName;
@property (nonatomic) NSString rightBackgroundColorName;
@property (nonatomic) BOOL isShowScoreStringNotNum;
@property (nonatomic) BOOL isNeedExternalScoreCorners;
- (BOOL)isNeedExternalScoreCorners;
- (BOOL)isShowScoreStringNotNum;
- (id)leftBackgroundColorName;
- (id)leftScoreColorName;
- (id)rightBackgroundColorName;
- (id)rightScoreColorName;
- (void)setIsNeedExternalScoreCorners:;
- (void)setIsShowScoreStringNotNum:;
- (void)setLeftBackgroundColorName:;
- (void)setLeftScoreColorName:;
- (void)setRightBackgroundColorName:;
- (void)setRightScoreColorName:;
- (void).cxx_destruct;
- (id)containerFrame;
- (void)setContainerFrame:;
@end
