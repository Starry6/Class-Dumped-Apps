@interface AWEOpenCollectionDetailTabV2Model : AWEBaseApiModel
@property (nonatomic) q collectionType;
@property (nonatomic) NSString title;
@property (nonatomic) q status;
@property (nonatomic) q contentCount;
- (long long)collectionType;
- (void)setStatus:;
- (void)setCollectionType:;
- (void).cxx_destruct;
- (long long)status;
- (id)title;
- (void)setTitle:;
- (long long)contentCount;
- (void)setContentCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
