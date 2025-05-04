@interface AWESearchRelatedPOIItemModel : AWEBaseApiModel
@property (nonatomic) NSString word;
@property (nonatomic) NSString wordID;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString source;
@property (nonatomic) AWEURLModel icon;
- (id)schema;
- (void)setSchema:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (void)setWordID:;
- (id)wordID;
- (id)word;
- (void)setWord:;
+ (id)JSONKeyPathsByPropertyKey;
@end
