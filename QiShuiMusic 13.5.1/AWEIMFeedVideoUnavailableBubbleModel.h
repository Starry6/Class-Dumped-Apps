@interface AWEIMFeedVideoUnavailableBubbleModel : NSObject
@property (nonatomic) NSAttributedString titleAttriString;
@property (nonatomic) NSAttributedString subtitleAttriString;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} titleFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} subtitleFrame;
@property (nonatomic) {CGSize=dd} contentSize;
- (void)commonInitWithMsg:;
- (void)computeLayout;
- (id)initWithMsg:;
- (void)setSubtitleAttriString:;
- (void)setSubtitleFrame:;
- (void)setTitleAttriString:;
- (id)subtitleAttriString;
- (id)subtitleAttriStringForMsg:;
- (id)subtitleFrame;
- (id)titleAttriString;
- (id)titleAttriStringForMsg:;
- (void).cxx_destruct;
- (id)contentSize;
- (void)setContentSize:;
- (id)titleFrame;
- (void)setTitleFrame:;
+ (id)modelForMsg:;
@end
