@interface AWEGameModel : MTLModel
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString coverUrl;
@property (nonatomic) NSString name;
@property (nonatomic) NSString subLabel;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString badge;
@property (nonatomic) NSString badgeColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCoverUrl:;
- (id)coverUrl;
- (id)schema;
- (void)setBadgeColor:;
- (void)setSchema:;
- (void)setIdentifier:;
- (id)badgeColor;
- (id)identifier;
- (id)badge;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)setBadge:;
- (void)setSubLabel:;
- (id)subLabel;
+ (id)JSONKeyPathsByPropertyKey;
@end
