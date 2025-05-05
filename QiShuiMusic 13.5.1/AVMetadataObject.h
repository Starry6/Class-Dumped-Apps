@interface AVMetadataObject : NSObject
@property (nonatomic) {?=qiIq} time;
@property (nonatomic) {?=qiIq} duration;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) NSString type;
- (id)input;
- (long long)groupID;
- (id)init;
- (void)dealloc;
- (id)time;
- (id)type;
- (id)bounds;
- (id)duration;
- (BOOL)isEqual:;
- (id)originalMetadataObject;
- (unsigned long long)syntheticFocusMode;
- (long long)detectionSource;
- (void)setDetectionSource:;
- (id)initWithType:time:duration:bounds:optionalInfoDict:originalMetadataObject:sourceCaptureInput:;
- (id)initDerivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:;
+ (id)derivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:;
@end
