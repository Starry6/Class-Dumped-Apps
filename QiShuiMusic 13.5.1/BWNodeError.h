@interface BWNodeError : NSObject
@property (nonatomic) NSInteger errorCode;
@property (nonatomic) NSString sourceNodeDescription;
@property (nonatomic) BWStillImageSettings stillImageSettings;
@property (nonatomic) FigCaptureRecordingSettings recordingSettings;
- (void)dealloc;
- (int)errorCode;
- (unsigned long long)hash;
- (id)stillImageSettings;
- (id)recordingSettings;
- (id)sourceNodeDescription;
+ (id)newError:sourceNode:;
+ (id)newError:sourceNode:stillImageSettings:;
+ (id)newError:sourceNode:recordingSettings:;
@end
