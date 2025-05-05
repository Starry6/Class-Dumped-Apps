@interface SAMICoreOCVopAudioChecker : NSObject
- (int)checkAudioQuality:audioLen:structuredText:result:;
- (int)setAudioMetricParameter:;
- (int)setOnlineAsrParameter:;
- (void)dealloc;
- (void).cxx_destruct;
- (int)init:;
- (id).cxx_construct;
@end
