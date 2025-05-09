@interface AWESearchSynthesisNovelBookSettingConfig : NSObject
@property (nonatomic) BDReaderConfig readerConfig;
@property (nonatomic) Q backgroundType;
@property (nonatomic) double textFontSize;
@property (nonatomic) double titleFontSize;
@property (nonatomic) Q pageMode;
@property (nonatomic) double brightness;
@property (nonatomic) @? layoutConfigPageInsetBlock;
@property (nonatomic) double marginBetweenTitleAndTop;
- (unsigned long long)pageMode;
- (void)setPageMode:;
- (id)readerConfig;
- (void)setLayoutConfigPageInsetBlock:;
- (void)setReaderConfig:;
- (double)textFontSize;
- (double)marginBetweenTitleAndTop;
- (id)layoutConfigPageInsetBlock;
- (id)defaultReaderConfig;
- (void)setMarginBetweenTitleAndTop:;
- (double)titleFontSize;
- (id)init;
- (void)setBackgroundType:;
- (void)setBrightness:;
- (double)brightness;
- (void)setTitleFontSize:;
- (void).cxx_destruct;
- (unsigned long long)backgroundType;
- (id)textColor;
- (void)setTextFontSize:;
+ (double)safeAreaBottom;
+ (double)safeAreaTop;
@end
