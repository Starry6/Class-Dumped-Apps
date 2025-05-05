@interface BDXAColorConfiguration : NSObject
@property (nonatomic) UIColor primaryColor;
@property (nonatomic) UIColor mainTextColor;
@property (nonatomic) UIColor subTextColor;
@property (nonatomic) UIColor hintTextColor;
@property (nonatomic) UIColor errorTextColor;
@property (nonatomic) UIColor clickableTextColor;
@property (nonatomic) UIColor borderColor;
@property (nonatomic) UIColor pageBackgroundColor;
- (id)clickableTextColor;
- (id)errorTextColor;
- (id)hintTextColor;
- (id)pageBackgroundColor;
- (void)setClickableTextColor:;
- (void)setErrorTextColor:;
- (void)setHintTextColor:;
- (void)setPageBackgroundColor:;
- (void)setSubTextColor:;
- (id)subTextColor;
- (id)primaryColor;
- (void)setBorderColor:;
- (id)borderColor;
- (id)initWithDictionary:;
- (void)setPrimaryColor:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)mainTextColor;
- (void)setMainTextColor:;
@end
