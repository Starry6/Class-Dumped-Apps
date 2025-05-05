@interface SFSecurityRecommendationsCellData : NSObject
@property (nonatomic) NSString subtitleText;
@property (nonatomic) Q numberOfWarnings;
@property (nonatomic) q warningStyle;
- (id)subtitleText;
- (unsigned long long)hash;
- (void)setSubtitleText:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithLoadingSubtitle;
- (id)initWithSubtitleText:numberOfWarnings:warningStyle:;
- (unsigned long long)numberOfWarnings;
- (void)setNumberOfWarnings:;
- (long long)warningStyle;
- (void)setWarningStyle:;
@end
