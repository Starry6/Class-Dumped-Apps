@interface RUIChoice : RUIElement
@property (nonatomic) Q choiceType;
@property (nonatomic) NSString title;
@property (nonatomic) UIColor tintColor;
- (id)tintColor;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)initWithAttributes:parent:;
- (void)stopActivityIndicator;
- (id)staticValues;
- (void)pageDidChange;
- (void)startActivityIndicator;
- (unsigned long long)typeForChoiceString:;
- (unsigned long long)choiceType;
@end
