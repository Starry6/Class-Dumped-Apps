@interface MOVStreamWriterStateFailed : MOVStreamWriterStateFinished
- (id)name;
- (void)activateWithContext:;
- (id)criticalErrorOccurred:context:;
- (long long)writerStatus;
@end
