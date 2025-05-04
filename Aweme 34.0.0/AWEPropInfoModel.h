@interface AWEPropInfoModel : NSObject
@property (nonatomic) NSString stickerId;
@property (nonatomic) NSString stickerType;
@property (nonatomic) double stickerDefaultCoverFrameTimestamp;
@property (nonatomic) NSString effectUgcPath;
- (void)setStickerType:;
- (id)stickerId;
- (void)setStickerId:;
- (id)effectUgcPath;
- (void)setEffectUgcPath:;
- (double)stickerDefaultCoverFrameTimestamp;
- (void)setStickerDefaultCoverFrameTimestamp:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)stickerType;
@end
