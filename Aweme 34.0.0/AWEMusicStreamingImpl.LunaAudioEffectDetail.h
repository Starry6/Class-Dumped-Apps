@interface AWEMusicStreamingImpl.LunaAudioEffectDetail : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString name;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString stage;
@property (nonatomic) q expireTime;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setStage:;
- (void)setKey:;
- (id)stage;
- (id)key;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)initWithCoder:;
- (long long)expireTime;
- (void)setExpireTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
