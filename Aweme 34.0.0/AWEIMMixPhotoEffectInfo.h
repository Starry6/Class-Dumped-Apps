@interface AWEIMMixPhotoEffectInfo : NSObject
@property (nonatomic) NSString stickerID;
@property (nonatomic) NSString coverURL;
@property (nonatomic) q maxMamber;
@property (nonatomic) BOOL isLora;
@property (nonatomic) NSString loraStyleID;
@property (nonatomic) NSString aiLoraID;
- (id)stickerID;
- (BOOL)isLora;
- (id)initWithLoraStickerID:coverURL:maxMember:;
- (id)initWithLoraStickerID:coverURL:maxMember:loraStyleID:;
- (void)setAiLoraID:;
- (id)loraStyleID;
- (long long)maxMamber;
- (id)aiLoraID;
- (void).cxx_destruct;
- (id)coverURL;
@end
