@interface IESLivePublicScreenNodeStyleConfig : NSObject
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) NSParagraphStyle paragraphStyle;
@property (nonatomic) q fontWeight;
@property (nonatomic) double fontSize;
@property (nonatomic) BOOL enableRTLOptimize;
@property (nonatomic) IESLivePublicScreenDisplayTextParseConfig templateEngineConfig;
@property (nonatomic) @? tapTextAction;
- (BOOL)enableRTLOptimize;
- (void)setEnableRTLOptimize:;
- (void)setTapTextAction:;
- (void)setTemplateEngineConfig:;
- (id)tapTextAction;
- (id)templateEngineConfig;
- (void)setFontWeight:;
- (long long)fontWeight;
- (double)preferredMaxLayoutWidth;
- (double)fontSize;
- (id)paragraphStyle;
- (void).cxx_destruct;
- (void)setPreferredMaxLayoutWidth:;
- (void)setFontSize:;
- (void)setParagraphStyle:;
+ (id)defaultConfiguration;
@end
