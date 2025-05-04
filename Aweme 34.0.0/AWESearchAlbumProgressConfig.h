@interface AWESearchAlbumProgressConfig : NSObject
@property (nonatomic) UIColor progressColor;
@property (nonatomic) UIColor progressBGColor;
@property (nonatomic) double containerMargin;
@property (nonatomic) double progressHeight;
@property (nonatomic) double progressMargin;
@property (nonatomic) double minProgressWidth;
- (void)setContainerMargin:;
- (void)setProgressHeight:;
- (void)setProgressMargin:;
- (double)progressHeight;
- (double)progressMargin;
- (double)containerMargin;
- (id)progressBGColor;
- (double)minProgressWidth;
- (void)setMinProgressWidth:;
- (void)setProgressBGColor:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)progressColor;
- (void)setProgressColor:;
@end
