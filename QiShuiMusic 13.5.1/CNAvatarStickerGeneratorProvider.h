@interface CNAvatarStickerGeneratorProvider : NSObject
@property (nonatomic) AVTStickerGenerator generator;
@property (nonatomic) <AVTAvatarRecord> avatarRecord;
- (id)generator;
- (void).cxx_destruct;
- (void)setGenerator:;
- (id)initWithAvatarRecord:;
- (id)avatarRecord;
- (void)setAvatarRecord:;
@end
