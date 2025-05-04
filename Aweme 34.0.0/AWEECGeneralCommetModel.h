@interface AWEECGeneralCommetModel : NSObject
@property (nonatomic) UIImage anchorIcon;
@property (nonatomic) NSArray iconImageURLs;
@property (nonatomic) BOOL hasAnchorType;
@property (nonatomic) NSString anchorType;
@property (nonatomic) Q businessType;
- (id)iconImageURLs;
- (void)setAnchorIcon:;
- (void)setBusinessType:;
- (id)anchorIcon;
- (void)setIconImageURLs:;
- (unsigned long long)businessType;
- (void).cxx_destruct;
- (id)anchorType;
- (BOOL)hasAnchorType;
- (void)setAnchorType:;
- (void)setHasAnchorType:;
@end
