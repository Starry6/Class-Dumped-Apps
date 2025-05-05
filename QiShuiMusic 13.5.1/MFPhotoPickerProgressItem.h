@interface MFPhotoPickerProgressItem : NSObject
@property (nonatomic) double progress;
@property (nonatomic) NSInteger imageRequestID;
@property (nonatomic) AVAssetExportSession exportSession;
- (void)setProgress:;
- (double)progress;
- (void).cxx_destruct;
- (id)description;
- (void)setImageRequestID:;
- (int)imageRequestID;
- (id)exportSession;
- (void)setExportSession:;
@end
