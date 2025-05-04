@interface AWEMusicStreamingImpl.ShareDouyinInfo : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString storyMusicID;
@property (nonatomic) NSString openAnchorShareId;
- (id)storyMusicID;
- (void)setStoryMusicID:;
- (id)openAnchorShareId;
- (void)setOpenAnchorShareId:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
