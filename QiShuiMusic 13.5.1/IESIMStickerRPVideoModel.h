@interface IESIMStickerRPVideoModel : IESIMBaseApiModel
@property (nonatomic) NSString redPacketVideoURL;
@property (nonatomic) NSString redPacketVideoID;
@property (nonatomic) NSString redPacketVideoOrderID;
@property (nonatomic) double firstShowTime;
@property (nonatomic) BOOL hasBeenCollected;
- (double)firstShowTime;
- (id)redPacketVideoID;
- (id)redPacketVideoOrderID;
- (id)redPacketVideoURL;
- (void)setFirstShowTime:;
- (void)setRedPacketVideoID:;
- (void)setRedPacketVideoOrderID:;
- (void)setRedPacketVideoURL:;
- (void).cxx_destruct;
- (BOOL)hasBeenCollected;
- (void)setHasBeenCollected:;
+ (id)JSONKeyPathsByPropertyKey;
@end
