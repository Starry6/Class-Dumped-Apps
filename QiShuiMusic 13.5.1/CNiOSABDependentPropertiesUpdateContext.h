@interface CNiOSABDependentPropertiesUpdateContext : NSObject
@property (nonatomic) BOOL hasPendingImageData;
@property (nonatomic) BOOL hasPendingCropRect;
@property (nonatomic) BOOL hasPendingThumbnailImageData;
@property (nonatomic) BOOL hasPendingSyncImageData;
@property (nonatomic) BOOL isUnifiedContact;
@property (nonatomic) NSData pendingImageData;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} pendingCropRect;
@property (nonatomic) NSData pendingThumbnailImageData;
@property (nonatomic) NSData pendingFullscreenImageData;
@property (nonatomic) NSData pendingSyncImageData;
- (void).cxx_destruct;
- (void)setPendingImageData:;
- (void)setPendingCropRect:;
- (void)setPendingThumbnailImageData:;
- (void)setPendingSyncImageData:;
- (void)resetAllData;
- (BOOL)logIfConditionFailed:message:error:;
- (BOOL)flushPendingImageChangesToPerson:logger:error:;
- (BOOL)setWatchChangesforThumbnailImageDataToPerson:error:;
- (BOOL)isUnifiedContact;
- (void)setIsUnifiedContact:;
- (id)pendingImageData;
- (id)pendingCropRect;
- (id)pendingThumbnailImageData;
- (id)pendingFullscreenImageData;
- (void)setPendingFullscreenImageData:;
- (id)pendingSyncImageData;
- (BOOL)hasPendingImageData;
- (void)setHasPendingImageData:;
- (BOOL)hasPendingCropRect;
- (void)setHasPendingCropRect:;
- (BOOL)hasPendingThumbnailImageData;
- (void)setHasPendingThumbnailImageData:;
- (BOOL)hasPendingSyncImageData;
- (void)setHasPendingSyncImageData:;
+ (id)os_log;
+ (BOOL)shouldSetWatchChanges;
@end
