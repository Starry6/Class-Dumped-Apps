@interface AWEMusicStreamingImpl.LunaMediaResource : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString id;
@property (nonatomic) NSString type;
@property (nonatomic) _TtC21AWEMusicStreamingImpl15LunaMediaEntity entity;
- (id)convertToFeedViewModel;
- (id)entity;
- (id)initWithDictionary:error:;
- (id)init;
- (id)type;
- (id)id;
- (void)setType:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setEntity:;
- (void)setId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
