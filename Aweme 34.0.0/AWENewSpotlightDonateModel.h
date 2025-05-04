@interface AWENewSpotlightDonateModel : MTLModel
@property (nonatomic) NSString query;
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString content;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)schema;
- (id)content;
- (void)setSchema:;
- (void)setQuery:;
- (id)query;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
