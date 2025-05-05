@interface IESLivePublicScreenRefreshConfig : NSObject
@property (nonatomic) q refreshCount;
@property (nonatomic) double refreshDuration;
@property (nonatomic) Q priority;
- (double)refreshDuration;
- (id)initWithRefreshCount:refreshDuration:priority:;
- (void)setRefreshDuration:;
- (void)setPriority:;
- (unsigned long long)priority;
- (long long)refreshCount;
- (void)setRefreshCount:;
@end
