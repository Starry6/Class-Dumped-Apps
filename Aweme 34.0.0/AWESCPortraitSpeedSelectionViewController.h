@interface AWESCPortraitSpeedSelectionViewController : AWESCPortraitSingleSelectionViewController
@property (nonatomic) NSArray supportedSpeeds;
@property (nonatomic) double currentSpeed;
- (void)configWithModel:;
- (long long)currentSelectedIndex;
- (id)dataSourceArray;
- (id)supportedSpeeds;
- (void)setSupportedSpeeds:;
- (void).cxx_destruct;
- (id)titleString;
- (double)currentSpeed;
- (void)setCurrentSpeed:;
- (void)selectItemAtIndex:;
@end
