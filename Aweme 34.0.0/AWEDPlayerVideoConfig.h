@interface AWEDPlayerVideoConfig : NSObject
@property (nonatomic) NSString outCoverUrl;
@property (nonatomic) UIImage outCoverImage;
@property (nonatomic) BOOL useLoadingView;
@property (nonatomic) BOOL hideLoadingViewAfterReadyForDisplay;
@property (nonatomic) @? coverDecryptBlock;
@property (nonatomic) double defaultSeekToTime;
@property (nonatomic) q customScaleMode;
@property (nonatomic) UIColor backUIColor;
- (double)defaultSeekToTime;
- (void)setDefaultSeekToTime:;
- (void)setCustomScaleMode:;
- (void)setOutCoverUrl:;
- (void)setBackUIColor:;
- (id)outCoverUrl;
- (id)outCoverImage;
- (void)setOutCoverImage:;
- (BOOL)hideLoadingViewAfterReadyForDisplay;
- (void)setHideLoadingViewAfterReadyForDisplay:;
- (id)coverDecryptBlock;
- (void)setCoverDecryptBlock:;
- (long long)customScaleMode;
- (id)backUIColor;
- (id)init;
- (void)setUseLoadingView:;
- (void).cxx_destruct;
- (BOOL)useLoadingView;
@end
