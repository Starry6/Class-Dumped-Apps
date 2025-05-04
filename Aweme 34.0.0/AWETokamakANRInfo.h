@interface AWETokamakANRInfo : NSObject
@property (nonatomic) double begin;
@property (nonatomic) double duration;
@property (nonatomic) BOOL isBackground;
- (double)begin;
- (void)setDuration:;
- (double)duration;
- (BOOL)isBackground;
- (void)setIsBackground:;
- (void)setBegin:;
@end
