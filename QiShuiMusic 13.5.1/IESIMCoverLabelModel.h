@interface IESIMCoverLabelModel : IESIMBaseApiModel
@property (nonatomic) NSString labelType;
@property (nonatomic) NSString text;
@property (nonatomic) IESIMURLModel coverLabelURL;
- (id)coverLabelURL;
- (void)setCoverLabelURL:;
- (void)setText:;
- (void)setLabelType:;
- (id)labelType;
- (void).cxx_destruct;
- (id)text;
+ (id)coverLabelURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
