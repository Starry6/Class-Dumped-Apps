@interface IESIMRelationRecommendModel : MTLModel
@property (nonatomic) NSNumber recommendType;
@property (nonatomic) NSString relationTextKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)relationTextKey;
- (void)addTrackInfo:;
- (id)recommendType;
- (void)setRecommendType:;
- (void)setRelationTextKey:;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
