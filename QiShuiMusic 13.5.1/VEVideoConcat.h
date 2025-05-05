@interface VEVideoConcat : NSObject
@property (nonatomic) BOOL isCancelled;
- (int)concatVideosWithInputPaths:outputPath:;
- (int)concatVideosWithInputPaths:outputPath:useClipDuration:;
- (id)init;
- (void)cancel;
- (BOOL)isCancelled;
- (void)setIsCancelled:;
+ (long long)concatVideosWithPaths:outputPath:totalDuration:ProgressBlock:;
+ (long long)convertTSSegmentsToMOVWithTSPaths:outputPath:;
+ (id)getAVErrorDes:;
+ (int)muxAV:audio:outputUrl:;
@end
