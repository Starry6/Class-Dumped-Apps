@interface AWEHPTopBarInfoModel : NSObject
@property (nonatomic) q currentThemeStyle;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} currentBarFrame;
@property (nonatomic) AWEHPChannelGuideInfoModel channelGuideInfo;
@property (nonatomic) NSArray leftEntranceInfos;
@property (nonatomic) NSArray rightEntranceInfos;
- (long long)currentThemeStyle;
- (void)setCurrentThemeStyle:;
- (void)setCurrentBarFrame:;
- (void)setChannelGuideInfo:;
- (id)currentBarFrame;
- (id)channelGuideInfo;
- (id)leftEntranceInfos;
- (id)rightEntranceInfos;
- (void)setLeftEntranceInfos:;
- (void)setRightEntranceInfos:;
- (id)description;
- (void).cxx_destruct;
@end
