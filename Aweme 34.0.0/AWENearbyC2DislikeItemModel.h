@interface AWENearbyC2DislikeItemModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) q type;
@property (nonatomic) NSString dislikeType;
@property (nonatomic) NSString serverExtra;
@property (nonatomic) NSString mobExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serverExtra;
- (void)setServerExtra:;
- (id)dislikeType;
- (void)setDislikeType:;
- (id)mobExtra;
- (void)setMobExtra:;
- (void)setText:;
- (id)text;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
