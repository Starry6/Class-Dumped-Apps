@interface AWEUGShortcutConfigModel : MTLModel
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) q rank;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)schema;
- (void)setSchema:;
- (void)setIdentifier:;
- (id)subtitle;
- (long long)rank;
- (void)setSubtitle:;
- (id)identifier;
- (void)setRank:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
