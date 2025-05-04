@interface AWENearbyLifeBarModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) AWEURLModel iconURLModel;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString distanceMinM;
@property (nonatomic) NSString l1Name;
@property (nonatomic) NSString l2Name;
@property (nonatomic) NSString l3Name;
- (id)iconURLModel;
- (void)setIconURLModel:;
- (id)distanceMinM;
- (void)setDistanceMinM:;
- (id)l1Name;
- (void)setL1Name:;
- (id)l2Name;
- (void)setL2Name:;
- (id)l3Name;
- (void)setL3Name:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)iconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
