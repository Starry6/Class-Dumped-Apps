@interface AWEIMWorkSpaceCardMessage : AWEBaseApiModel
@property (nonatomic) q source;
@property (nonatomic) q missionSource;
@property (nonatomic) NSString attentionContent;
@property (nonatomic) NSString content;
@property (nonatomic) q timpStamp;
- (id)attentionContent;
- (long long)timpStamp;
- (long long)missionSource;
- (void)setMissionSource:;
- (void)setAttentionContent:;
- (void)setTimpStamp:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (long long)source;
- (void)setSource:;
+ (id)JSONKeyPathsByPropertyKey;
@end
