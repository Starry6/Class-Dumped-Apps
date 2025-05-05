@interface IESLiveNormalActionViewConfig : NSObject
@property (nonatomic) double radius;
@property (nonatomic) NSString title;
@property (nonatomic) UIColor titleColor;
@property (nonatomic) UIFont titleFont;
@property (nonatomic) q alignment;
@property (nonatomic) @? action;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
- (id)titleFont;
- (void)setRadius:;
- (id)init;
- (void)setBackgroundColor:;
- (void)setAlignment:;
- (void)setTitleFont:;
- (void)setFrame:;
- (id)backgroundColor;
- (double)radius;
- (id)action;
- (void)setTitleColor:;
- (void)setTitle:;
- (void)setAction:;
- (id)frame;
- (id)titleColor;
- (id)title;
- (void).cxx_destruct;
- (long long)alignment;
@end
