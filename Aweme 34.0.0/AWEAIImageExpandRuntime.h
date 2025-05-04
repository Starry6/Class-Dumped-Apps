@interface AWEAIImageExpandRuntime : NSObject
@property (nonatomic) double beginTime;
@property (nonatomic) BOOL isCancel;
- (double)timeDiff;
- (id)init;
- (double)beginTime;
- (void)setBeginTime:;
- (BOOL)isCancel;
- (void)setIsCancel:;
@end
