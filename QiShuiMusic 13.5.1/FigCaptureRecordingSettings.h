@interface FigCaptureRecordingSettings : NSObject
@property (nonatomic) q settingsID;
@property (nonatomic) NSURL outputURL;
@property (nonatomic) NSString outputFileType;
@property (nonatomic) {?=qiIq} maxDuration;
@property (nonatomic) q maxFileSize;
@property (nonatomic) q minFreeDiskSpaceLimit;
- (long long)maxFileSize;
- (id)init;
- (void)dealloc;
- (void)setOutputFileType:;
- (id)initWithCoder:;
- (id)outputFileType;
- (void)setSettingsID:;
- (void)setOutputURL:;
- (void)encodeWithCoder:;
- (id)outputURL;
- (long long)settingsID;
- (id)copyWithZone:;
- (id)maxDuration;
- (void)setMaxDuration:;
- (void)setMaxFileSize:;
- (long long)minFreeDiskSpaceLimit;
- (void)setMinFreeDiskSpaceLimit:;
+ (BOOL)supportsSecureCoding;
@end
