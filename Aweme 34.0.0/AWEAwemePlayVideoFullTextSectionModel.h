@interface AWEAwemePlayVideoFullTextSectionModel : MTLModel
@property (nonatomic) NSArray sentences;
@property (nonatomic) NSNumber startTime;
@property (nonatomic) NSNumber endTime;
@property (nonatomic) NSString paragraphTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)paragraphTitle;
- (id)endTime;
- (id)sentences;
- (void).cxx_destruct;
- (id)startTime;
- (void)setSentences:;
+ (id)sentencesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
