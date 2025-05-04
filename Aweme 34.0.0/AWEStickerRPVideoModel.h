@interface AWEStickerRPVideoModel : AWEBaseApiModel
@property (nonatomic) NSString redPacketVideoURL;
@property (nonatomic) NSString redPacketVideoID;
@property (nonatomic) NSString redPacketVideoOrderID;
@property (nonatomic) double firstShowTime;
@property (nonatomic) BOOL hasBeenCollected;
- (id)redPacketVideoURL;
- (void)setRedPacketVideoURL:;
- (id)redPacketVideoID;
- (void)setRedPacketVideoID:;
- (id)redPacketVideoOrderID;
- (void)setRedPacketVideoOrderID:;
- (double)firstShowTime;
- (void)setFirstShowTime:;
- (void).cxx_destruct;
- (BOOL)hasBeenCollected;
- (void)setHasBeenCollected:;
+ (id)JSONKeyPathsByPropertyKey;
@end
