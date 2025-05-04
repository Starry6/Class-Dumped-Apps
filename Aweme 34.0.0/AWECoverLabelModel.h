@interface AWECoverLabelModel : AWEBaseApiModel
@property (nonatomic) NSString labelType;
@property (nonatomic) NSString text;
@property (nonatomic) AWEURLModel coverLabelURL;
- (id)coverLabelURL;
- (void)setCoverLabelURL:;
- (id)labelType;
- (void)setText:;
- (void)setLabelType:;
- (id)text;
- (void).cxx_destruct;
+ (id)coverLabelURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
