@interface IESECHeadVideoExtraInfoHeadVideoModel : MTLModel
@property (nonatomic) q videoType;
@property (nonatomic) NSDictionary trackMeta;
@property (nonatomic) NSDictionary floatTrackMeta;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)floatTrackMeta;
- (void)setFloatTrackMeta:;
- (void)setTrackMeta:;
- (id)trackMeta;
- (long long)videoType;
- (void).cxx_destruct;
- (void)setVideoType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
