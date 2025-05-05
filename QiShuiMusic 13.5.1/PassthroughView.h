@interface PassthroughView : UIView
@property (nonatomic) BOOL allowPassthrough;
@property (nonatomic) RecordingConfig recordingConfig;
@property (nonatomic) BOOL isRecording;
- (id)initWithFrame:;
- (BOOL)pointInside:withEvent:;
- (void)processTouchesImmediately:;
- (void)handleTouches:;
- (BOOL)allowPassthrough;
- (void)setAllowPassthrough:;
- (id)recordingConfig;
- (void)setRecordingConfig:;
- (BOOL)isRecording;
- (void)setIsRecording:;
- (void).cxx_destruct;
@end
