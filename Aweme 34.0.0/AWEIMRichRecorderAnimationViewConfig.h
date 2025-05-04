@interface AWEIMRichRecorderAnimationViewConfig : NSObject
@property (nonatomic) {CGPoint=dd} startpoint;
@property (nonatomic) UIView startView;
@property (nonatomic) UIView inputVCView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} inputVCFrame;
@property (nonatomic) q currentInputType;
@property (nonatomic) BOOL hasPreferredTheme;
@property (nonatomic) q preferredTheme;
@property (nonatomic) BOOL isFormatScene;
- (BOOL)isFormatScene;
- (void)setInputVCFrame:;
- (void)setStartpoint:;
- (id)inputVCFrame;
- (id)startpoint;
- (id)inputVCView;
- (void)setInputVCView:;
- (void)setCurrentInputType:;
- (long long)preferredTheme;
- (void)setPreferredTheme:;
- (void)setIsFormatScene:;
- (BOOL)hasPreferredTheme;
- (void)setHasPreferredTheme:;
- (long long)currentInputType;
- (void).cxx_destruct;
- (void)setStartView:;
- (id)startView;
@end
