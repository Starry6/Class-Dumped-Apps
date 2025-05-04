@interface AWEECMallCategoryViewConfig : NSObject
@property (nonatomic) q defaultSelectedIndex;
@property (nonatomic) q needKeepTopIndex;
@property (nonatomic) q maxTitleLen;
@property (nonatomic) double leftMargin;
- (long long)needKeepTopIndex;
- (long long)maxTitleLen;
- (void)setDefaultSelectedIndex:;
- (void)setNeedKeepTopIndex:;
- (void)setMaxTitleLen:;
- (double)leftMargin;
- (void)setLeftMargin:;
- (long long)defaultSelectedIndex;
+ (id)defaultConfig;
@end
