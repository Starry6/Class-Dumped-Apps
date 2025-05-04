@interface AWEIMChatCellPreloadConfig : NSObject
@property (nonatomic) q preloadBuffer;
@property (nonatomic) double offsetRequired;
@property (nonatomic) double currentOffset;
- (long long)preloadBuffer;
- (void)setPreloadBuffer:;
- (double)offsetRequired;
- (void)setOffsetRequired:;
- (id)init;
- (double)currentOffset;
- (void)reset;
- (void)setCurrentOffset:;
@end
