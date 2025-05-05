@interface CSJLOTReplaceTextConfigurationItem : NSObject
@property (nonatomic) q location;
@property (nonatomic) q length;
@property (nonatomic) q baseline;
@property (nonatomic) double fontSize;
@property (nonatomic) NSString fontColorHexString;
@property (nonatomic) NSString fillColorHexString;
@property (nonatomic) double round;
- (id)fillColorHexString;
- (id)fontColorHexString;
- (double)round;
- (void)setFillColorHexString:;
- (void)setFontColorHexString:;
- (void)setRound:;
- (long long)location;
- (long long)baseline;
- (id)initWithDict:;
- (double)fontSize;
- (void)setLocation:;
- (void).cxx_destruct;
- (void)setFontSize:;
- (long long)length;
- (void)setLength:;
- (void)setBaseline:;
@end
