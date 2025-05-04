@interface AWECodeGenContentTextFormatModel : AWEBaseDataModel
@property (nonatomic) q textType;
@property (nonatomic) NSInteger start;
@property (nonatomic) NSInteger end;
@property (nonatomic) NSInteger textSize;
@property (nonatomic) NSString textColorLight;
@property (nonatomic) NSString textColorDark;
@property (nonatomic) NSString backgroundColorLight;
@property (nonatomic) NSString backgroundColorDark;
- (id)textColorDark;
- (id)textColorLight;
- (void)setTextColorLight:;
- (void)setTextColorDark:;
- (void)setStart:;
- (void)setEnd:;
- (id)backgroundColorLight;
- (id)backgroundColorDark;
- (void)setBackgroundColorDark:;
- (void)setBackgroundColorLight:;
- (int)end;
- (void).cxx_destruct;
- (int)start;
- (int)textSize;
- (void)setTextType:;
- (long long)textType;
- (void)setTextSize:;
+ (id)JSONKeyPathsByPropertyKey;
@end
