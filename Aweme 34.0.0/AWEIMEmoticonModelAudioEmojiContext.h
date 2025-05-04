@interface AWEIMEmoticonModelAudioEmojiContext : MTLModel
@property (nonatomic) NSString audioUrl;
@property (nonatomic) NSString audioFileType;
@property (nonatomic) NSString audioMd5;
@property (nonatomic) Q type;
@property (nonatomic) q duration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)audioUrl;
- (void)setAudioUrl:;
- (id)audioMd5;
- (void)setAudioMd5:;
- (void)setDuration:;
- (void)setAudioFileType:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (long long)duration;
- (id)audioFileType;
+ (id)JSONKeyPathsByPropertyKey;
@end
