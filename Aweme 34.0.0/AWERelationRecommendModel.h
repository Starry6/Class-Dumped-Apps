@interface AWERelationRecommendModel : MTLModel
@property (nonatomic) NSNumber recommendType;
@property (nonatomic) NSString relationTextKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)recommendType;
- (void)setRecommendType:;
- (id)relationTextKey;
- (void)addTrackInfo:;
- (void)setRelationTextKey:;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
