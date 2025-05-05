@interface MPDownloadProgressView : UIView
@property (nonatomic) double downloadProgress;
@property (nonatomic) UIImage centerImage;
@property (nonatomic) UIColor outerRingColor;
- (double)downloadProgress;
- (void)setDownloadProgress:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)outerRingColor;
- (void)setCenterImage:;
- (void)setOuterRingColor:;
- (id)centerImage;
@end
