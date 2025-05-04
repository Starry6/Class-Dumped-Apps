@interface AWEMVLocalGroup : MTLModel
@property (nonatomic) NSNumber vid;
@property (nonatomic) NSNumber value;
@property (nonatomic) q minRegion;
@property (nonatomic) q maxRegion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)minRegion;
- (long long)maxRegion;
- (void)setMinRegion:;
- (void)setMaxRegion:;
- (id)value;
- (void)setValue:;
- (void).cxx_destruct;
- (void)setVid:;
- (id)vid;
+ (id)JSONKeyPathsByPropertyKey;
@end
