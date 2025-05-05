@interface BWFileSinkNode : BWSinkNode
@property (nonatomic) <BWNodeFileWriterStatusDelegate> recordingStatusDelegate;
@property (nonatomic) Q lastFileSize;
@property (nonatomic) {?=qiIq} lastFileDuration;
- (unsigned long long)lastFileSize;
- (id)lastFileDuration;
- (id)recordingStatusDelegate;
- (void)setRecordingStatusDelegate:;
@end
