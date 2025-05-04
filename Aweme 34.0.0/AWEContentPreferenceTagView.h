@interface AWEContentPreferenceTagView : UIView
@property (nonatomic) NSString title;
@property (nonatomic) UILabel label;
@property (nonatomic) @? clickBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)onClick;
- (id)initWithTitle:clickBlock:;
- (void)setLabel:;
- (void)setup;
- (id)label;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
