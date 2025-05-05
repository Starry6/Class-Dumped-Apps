@interface IESLiveGiftPlayerSamplerTimingNode : NSObject
@property (nonatomic) Q index;
@property (nonatomic) double timing;
- (double)timing;
- (void)setTiming:;
- (unsigned long long)index;
- (void)setIndex:;
+ (id)nodeWithIndex:timing:;
@end
