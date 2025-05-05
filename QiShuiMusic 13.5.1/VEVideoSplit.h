@interface VEVideoSplit : NSObject
+ (id)getAVErrorDes:;
+ (long long)splitVideo:output:onTimePoints:isOnlyAudio:;
@end
