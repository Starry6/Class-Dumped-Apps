@interface MOVStreamWriterStateCancelled : MOVStreamWriterStateFinished
- (id)name;
- (void)activateWithContext:;
- (id)cancelRecording:;
- (id)criticalErrorOccurred:context:;
- (long long)writerStatus;
@end
