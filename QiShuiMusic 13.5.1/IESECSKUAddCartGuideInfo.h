@interface IESECSKUAddCartGuideInfo : MTLModel
@property (nonatomic) NSNumber countQuota;
@property (nonatomic) NSString guideText;
@property (nonatomic) NSNumber guideType;
@property (nonatomic) NSDictionary trackMeta;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)countQuota;
- (id)guideText;
- (id)guideType;
- (void)setCountQuota:;
- (void)setGuideText:;
- (void)setGuideType:;
- (void)setTrackMeta:;
- (id)trackMeta;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
