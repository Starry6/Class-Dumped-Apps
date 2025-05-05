@interface ByteRTCMediaPlayerConfig : NSObject
@property (nonatomic) q type;
@property (nonatomic) q playCount;
@property (nonatomic) q startPos;
@property (nonatomic) q callbackOnProgressInterval;
@property (nonatomic) BOOL syncProgressToRecordFrame;
@property (nonatomic) BOOL autoPlay;
- (long long)callbackOnProgressInterval;
- (void)setCallbackOnProgressInterval:;
- (BOOL)syncProgressToRecordFrame;
- (void)setSyncProgressToRecordFrame:;
- (long long)playCount;
- (void)setPlayCount:;
- (id)init;
- (void)setType:;
- (long long)type;
- (BOOL)autoPlay;
- (void)setAutoPlay:;
- (long long)startPos;
- (void)setStartPos:;
@end
