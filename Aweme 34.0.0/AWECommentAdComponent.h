@interface AWECommentAdComponent : AWEBaseApiModel
@property (nonatomic) Q type;
@property (nonatomic) NSString adPageID;
@property (nonatomic) NSString adID;
@property (nonatomic) NSString creativeID;
@property (nonatomic) NSString clickID;
@property (nonatomic) NSString advertiserID;
@property (nonatomic) NSString adComponentID;
- (id)adID;
- (void)setAdID:;
- (void)setCreativeID:;
- (id)adPageID;
- (void)setAdPageID:;
- (id)clickID;
- (void)setClickID:;
- (id)advertiserID;
- (void)setAdvertiserID:;
- (id)adComponentID;
- (void)setAdComponentID:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)creativeID;
+ (id)JSONKeyPathsByPropertyKey;
@end
