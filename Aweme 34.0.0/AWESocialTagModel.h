@interface AWESocialTagModel : MTLModel
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) q tagType;
@property (nonatomic) NSString mobLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mobLabel;
- (void)setMobLabel:;
- (id)schema;
- (long long)tagType;
- (void)setSchema:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setTagType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
