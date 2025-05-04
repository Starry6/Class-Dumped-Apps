@interface AWEInTodaySchemaAnchor : MTLModel
@property (nonatomic) NSString anchorID;
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString icon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)anchorID;
- (void)setAnchorID:;
- (id)icon;
- (long long)type;
- (void)setType:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
