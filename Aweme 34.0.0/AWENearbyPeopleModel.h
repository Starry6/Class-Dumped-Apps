@interface AWENearbyPeopleModel : AWEBaseApiModel
@property (nonatomic) NSString showText;
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSArray headImageURL;
@property (nonatomic) NSString schema;
- (void)setShowText:;
- (id)headImageURL;
- (void)setHeadImageURL:;
- (id)schema;
- (void)setIconURL:;
- (void)setSchema:;
- (id)iconURL;
- (void).cxx_destruct;
- (id)showText;
+ (id)JSONKeyPathsByPropertyKey;
@end
