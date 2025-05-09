@interface CSJSplashZoomOutModel : NSObject
@property (nonatomic) NSString splashIconUrl;
@property (nonatomic) q splashIconWidth;
@property (nonatomic) q splashIconHeight;
@property (nonatomic) double splashIconVideoWidth;
@property (nonatomic) double splashIconVideoHeight;
@property (nonatomic) Q status;
@property (nonatomic) double videoEndcardShowTime;
@property (nonatomic) NSString videoEndcardText;
- (long long)splashIconWidth;
- (void)setSplashIconHeight:;
- (void)setSplashIconUrl:;
- (void)setSplashIconVideoHeight:;
- (void)setSplashIconVideoWidth:;
- (void)setSplashIconWidth:;
- (void)setVideoEndcardShowTime:;
- (void)setVideoEndcardText:;
- (void)setupDataWithDictionary:;
- (long long)splashIconHeight;
- (id)splashIconUrl;
- (double)splashIconVideoHeight;
- (double)splashIconVideoWidth;
- (double)videoEndcardShowTime;
- (id)videoEndcardText;
- (void)setStatus:;
- (id)initWithDictionary:error:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)status;
@end
