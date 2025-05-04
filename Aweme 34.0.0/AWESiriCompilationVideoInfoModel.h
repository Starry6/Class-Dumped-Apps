@interface AWESiriCompilationVideoInfoModel : MTLModel
@property (nonatomic) NSNumber episode;
@property (nonatomic) NSString mixID;
@property (nonatomic) NSString mixName;
@property (nonatomic) NSNumber mixType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mixName;
- (id)mixID;
- (id)mixType;
- (void)setMixName:;
- (void)setMixID:;
- (void)setMixType:;
- (void).cxx_destruct;
- (id)episode;
- (void)setEpisode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
