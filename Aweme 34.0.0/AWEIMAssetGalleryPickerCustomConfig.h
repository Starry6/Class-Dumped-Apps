@interface AWEIMAssetGalleryPickerCustomConfig : NSObject
@property (nonatomic) Q maxAssetCount;
@property (nonatomic) BOOL watchOnce;
@property (nonatomic) BOOL simpleSendMode;
@property (nonatomic) BOOL disableSendVideo;
@property (nonatomic) BOOL disableBindPhoneAlert;
@property (nonatomic) BOOL enableLowQualityEarlyReturn;
@property (nonatomic) @? sendCompletionBlock;
@property (nonatomic) @? cancelBlock;
- (unsigned long long)maxAssetCount;
- (void)setMaxAssetCount:;
- (void)setWatchOnce:;
- (void)setSimpleSendMode:;
- (void)setDisableSendVideo:;
- (void)setDisableBindPhoneAlert:;
- (BOOL)watchOnce;
- (BOOL)simpleSendMode;
- (BOOL)disableSendVideo;
- (BOOL)enableLowQualityEarlyReturn;
- (void)setEnableLowQualityEarlyReturn:;
- (BOOL)disableBindPhoneAlert;
- (void)setCancelBlock:;
- (void).cxx_destruct;
- (id)cancelBlock;
- (id)sendCompletionBlock;
- (void)setSendCompletionBlock:;
@end
