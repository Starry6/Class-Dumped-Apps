@interface AWEAudioDashModel : AWEBaseApiModel
@property (nonatomic) NSNumber audioQuality;
@property (nonatomic) NSDictionary audioMetaInfo;
@property (nonatomic) NSString audioExtra;
- (id)audioQuality;
- (void)setAudioQuality:;
- (id)audioMetaInfo;
- (void)setAudioMetaInfo:;
- (id)audioExtra;
- (void)setAudioExtra:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
