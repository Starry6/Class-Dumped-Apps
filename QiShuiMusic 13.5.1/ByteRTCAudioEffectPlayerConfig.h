@interface ByteRTCAudioEffectPlayerConfig : NSObject
@property (nonatomic) q type;
@property (nonatomic) q pitch;
@property (nonatomic) q playCount;
@property (nonatomic) q startPos;
- (long long)playCount;
- (void)setPlayCount:;
- (void)setPitch:;
- (id)init;
- (void)setType:;
- (long long)pitch;
- (long long)type;
- (long long)startPos;
- (void)setStartPos:;
@end
