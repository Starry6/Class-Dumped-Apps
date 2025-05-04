@interface AWENoticeContentTextFormatModel : AWEBaseApiModel
@property (nonatomic) Q textType;
@property (nonatomic) q start;
@property (nonatomic) q end;
@property (nonatomic) q textSize;
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
- (long long)end;
- (void).cxx_destruct;
- (long long)start;
- (long long)textSize;
- (void)setTextType:;
- (unsigned long long)textType;
- (void)setTextSize:;
+ (id)JSONKeyPathsByPropertyKey;
@end
