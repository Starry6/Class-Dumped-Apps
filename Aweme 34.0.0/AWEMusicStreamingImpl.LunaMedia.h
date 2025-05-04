@interface AWEMusicStreamingImpl.LunaMedia : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString id;
@property (nonatomic) NSString type;
- (id)initWithDictionary:error:;
- (id)init;
- (id)type;
- (id)id;
- (void)setType:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
