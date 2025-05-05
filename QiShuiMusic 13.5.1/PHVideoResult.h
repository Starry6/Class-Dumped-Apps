@interface PHVideoResult : PHCompositeMediaResult
@property (nonatomic) NSURL videoURL;
@property (nonatomic) NSData videoMediaItemMakerData;
@property (nonatomic) NSString uniformTypeIdentifier;
- (id)videoURL;
- (void)setUniformTypeIdentifier:;
- (id)uniformTypeIdentifier;
- (void)setVideoURL:;
- (BOOL)containsValidData;
- (void).cxx_destruct;
- (id)allowedInfoKeys;
- (id)videoMediaItemMakerData;
- (id)videoAdjustmentData;
- (void)setVideoAdjustmentData:;
- (void)setVideoMediaItemMakerData:;
@end
