@interface TVLPlayerItemAccessLogRenderStallEvent : TVLPlayerItemAccessLogStallEvent
@property (nonatomic) q type;
@property (nonatomic) q renderStallTime;
@property (nonatomic) q renderStallTimeFPS;
- (long long)renderStallTime;
- (id)initWithType:stallTime:;
- (long long)renderStallTimeFPS;
- (void)setRenderStallTime:;
- (void)setRenderStallTimeFPS:;
- (void)setType:;
- (long long)type;
+ (id)renderStallEventWithStallEvent:type:;
@end
