@interface IESIMChallengeHeaderViewButtonConfig : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) IESIMURLModel iconURL;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIconURL:;
- (id)schema;
- (void)setText:;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)iconURL;
- (id)text;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
