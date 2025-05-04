@interface AWEDTORecordSegmentStickerModel : MTLModel
@property (nonatomic) NSString stickerId;
@property (nonatomic) NSString stickerType;
@property (nonatomic) double stickerDefaultCoverFrameTimestamp;
@property (nonatomic) NSString aigcExtraInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStickerType:;
- (id)stickerId;
- (void)setStickerId:;
- (id)aigcExtraInfo;
- (void)setAigcExtraInfo:;
- (double)stickerDefaultCoverFrameTimestamp;
- (void)setStickerDefaultCoverFrameTimestamp:;
- (void).cxx_destruct;
- (id)stickerType;
+ (id)JSONKeyPathsByPropertyKey;
@end
