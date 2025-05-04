@interface AWEMusicStreamingImpl.LunaSongMakerDetailInfo : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString artistID;
@property (nonatomic) NSString name;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)initWithCoder:;
- (id)artistID;
- (void)setArtistID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
