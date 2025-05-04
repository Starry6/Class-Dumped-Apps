@interface AWESCPortraitResolutionSelectionViewController : AWESCPortraitSingleSelectionViewController
@property (nonatomic) NSArray supportedResolutions;
@property (nonatomic) NSString currentResolution;
@property (nonatomic) NSArray limitedResolutions;
- (void)configWithModel:;
- (long long)currentSelectedIndex;
- (id)dataSourceArray;
- (id)limitedResolutions;
- (void)setLimitedResolutions:;
- (id)tagTextAtIndex:;
- (void)updateLimitedResolution:;
- (void).cxx_destruct;
- (id)titleString;
- (void)setSupportedResolutions:;
- (id)supportedResolutions;
- (id)currentResolution;
- (void)setCurrentResolution:;
- (void)selectItemAtIndex:;
@end
