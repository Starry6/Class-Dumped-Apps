@interface IESliveAudioSeatPriorityItem : NSObject
@property (nonatomic) q priority;
@property (nonatomic) BOOL isActive;
@property (nonatomic) @? startBlock;
@property (nonatomic) @? endBlock;
- (id)endBlock;
- (void)setEndBlock:;
- (void)setPriority:;
- (void)setIsActive:;
- (void).cxx_destruct;
- (id)startBlock;
- (void)setStartBlock:;
- (BOOL)isActive;
- (long long)priority;
+ (id)itemWithPriority:startBlock:endBlock:;
@end
