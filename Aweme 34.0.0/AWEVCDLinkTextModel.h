@interface AWEVCDLinkTextModel : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) AWEURLModel link;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)link;
- (void)setLink:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)linkJSONTransformer;
@end
