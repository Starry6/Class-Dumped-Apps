@interface AWEEntertainmentMultipleEventsConfig : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) NSString richText;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) @? action;
@property (nonatomic) q index;
- (id)initWithEventText:action:index:;
- (void)setIndex:;
- (long long)index;
- (id)iconImage;
- (void)setIconImage:;
- (void)setText:;
- (id)richText;
- (id)text;
- (void)setAction:;
- (void)setRichText:;
- (id)action;
- (void).cxx_destruct;
@end
