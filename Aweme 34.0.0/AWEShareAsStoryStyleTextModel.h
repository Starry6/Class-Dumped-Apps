@interface AWEShareAsStoryStyleTextModel : NSObject
@property (nonatomic) NSString typeString;
@property (nonatomic) NSString content;
@property (nonatomic) double fontSize;
@property (nonatomic) NSString fontName;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) AWEShareAsStoryStyleFrameModel frameModel;
- (id)frameModel;
- (void)setFrameModel:;
- (id)initWithRect:content:;
- (void)setFontName:;
- (void)setTypeString:;
- (id)content;
- (double)fontSize;
- (id)fontName;
- (void)setTextColor:;
- (void)setFontSize:;
- (id)backgroundColor;
- (void)setContent:;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)typeString;
- (id)textColor;
+ (id)modelCustomPropertyMapper;
+ (id)initWithRect:content:;
@end
