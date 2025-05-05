@interface IESECGoodsRecommendReasonModel : MTLModel
@property (nonatomic) IESECURLModel coverIcon;
@property (nonatomic) NSString recommendContent;
@property (nonatomic) NSString schema;
@property (nonatomic) q reasonType;
@property (nonatomic) NSString rankID;
@property (nonatomic) NSNumber rank;
@property (nonatomic) Q rankListStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)coverIcon;
- (id)rankID;
- (unsigned long long)rankListStyle;
- (id)recommendContent;
- (void)setCoverIcon:;
- (void)setRankID:;
- (void)setRankListStyle:;
- (void)setRecommendContent:;
- (void)setReasonType:;
- (id)schema;
- (long long)reasonType;
- (id)rank;
- (void)setSchema:;
- (void).cxx_destruct;
- (void)setRank:;
+ (id)JSONKeyPathsByPropertyKey;
@end
