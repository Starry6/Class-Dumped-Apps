@interface AWENearbyCoverCommentModel : MTLModel
@property (nonatomic) q awemeID;
@property (nonatomic) NSArray comments;
@property (nonatomic) Q currentIndex;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAwemeID:;
- (long long)awemeID;
- (void)setCurrentIndex:;
- (void).cxx_destruct;
- (unsigned long long)currentIndex;
- (id)comments;
- (void)setComments:;
+ (id)commentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
