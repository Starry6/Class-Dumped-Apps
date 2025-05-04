@interface AWEAwemeSearchVideoAbstractSectionModel : MTLModel
@property (nonatomic) q sectionType;
@property (nonatomic) NSString sectionTitle;
@property (nonatomic) NSString sectionContent;
@property (nonatomic) NSArray textExtras;
@property (nonatomic) NSNumber jumpTime;
@property (nonatomic) NSNumber endTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)textExtras;
- (void)setTextExtras:;
- (id)jumpTime;
- (id)endTime;
- (long long)sectionType;
- (void).cxx_destruct;
- (id)sectionTitle;
- (id)sectionContent;
+ (id)textExtrasJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
