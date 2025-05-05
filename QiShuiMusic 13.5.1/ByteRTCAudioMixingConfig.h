@interface ByteRTCAudioMixingConfig : NSObject
@property (nonatomic) q type;
@property (nonatomic) q playCount;
@property (nonatomic) q position;
@property (nonatomic) q callbackOnProgressInterval;
@property (nonatomic) BOOL syncProgressToRecordFrame;
- (long long)callbackOnProgressInterval;
- (void)setCallbackOnProgressInterval:;
- (BOOL)syncProgressToRecordFrame;
- (void)setSyncProgressToRecordFrame:;
- (void)setPosition:;
- (long long)playCount;
- (void)setPlayCount:;
- (long long)position;
- (id)init;
- (void)setType:;
- (long long)type;
@end
