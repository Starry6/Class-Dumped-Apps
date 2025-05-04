@interface AWEPlayInteractionTemplateButtonConfig : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString duxIconID;
@property (nonatomic) AWEURLModel iconUrl;
@property (nonatomic) Q iconPosition;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor flashBackgroundColor;
@property (nonatomic) @? btnClickBlock;
- (id)iconUrl;
- (void)setIconUrl:;
- (void)setIconPosition:;
- (unsigned long long)iconPosition;
- (id)btnClickBlock;
- (void)setBtnClickBlock:;
- (id)flashBackgroundColor;
- (id)initWithButtonUnit:;
- (void)setDuxIconID:;
- (void)setFlashBackgroundColor:;
- (id)duxIconID;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
