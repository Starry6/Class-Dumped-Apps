@interface MFPhotoPickerProgressManager : NSObject
@property (nonatomic) NSMutableDictionary progressItems;
- (id)init;
- (void).cxx_destruct;
- (void)setProgress:forIndexPath:;
- (void)setImageRequestID:forIndexPath:;
- (void)setExportSession:forIndexPath:;
- (BOOL)anyRequestExists;
- (BOOL)requestExistsForIndexPath:;
- (double)progressForIndexPath:;
- (void)cancelEverything;
- (void)cancelEverythingAtIndexPath:;
- (void)_cancelProgressItem:;
- (id)progressItems;
@end
