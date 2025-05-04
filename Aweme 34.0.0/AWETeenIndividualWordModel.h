@interface AWETeenIndividualWordModel : AWEBaseApiModel
@property (nonatomic) NSString wordID;
@property (nonatomic) NSString content;
@property (nonatomic) NSString individualWordType;
@property (nonatomic) NSString imageURL;
@property (nonatomic) q wordSource;
@property (nonatomic) q iconType;
- (void)setIndividualWordType:;
- (id)individualWordType;
- (id)content;
- (void)setContent:;
- (id)imageURL;
- (void).cxx_destruct;
- (void)setImageURL:;
- (long long)iconType;
- (void)setWordID:;
- (void)setWordSource:;
- (id)wordID;
- (long long)wordSource;
- (void)setIconType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
