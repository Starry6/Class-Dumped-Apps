@interface IESECFeedResourceCardButtonModel : IESECFeedResourceCardBaseNode
@property (nonatomic) Q style;
@property (nonatomic) NSString text;
@property (nonatomic) NSString link;
- (id)link;
- (void)setText:;
- (void)setLink:;
- (void)setStyle:;
- (void).cxx_destruct;
- (unsigned long long)style;
- (id)text;
+ (id)JSONKeyPathsByPropertyKey;
@end
