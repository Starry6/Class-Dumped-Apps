@interface AWEChallengeHeaderViewButtonConfig : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)schema;
- (void)setIconURL:;
- (void)setSchema:;
- (id)iconURL;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
