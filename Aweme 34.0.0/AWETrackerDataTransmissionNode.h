@interface AWETrackerDataTransmissionNode : NSObject
@property (nonatomic) double allocTimeStamp;
@property (nonatomic) NSString dataNodeClassStr;
@property (nonatomic) Q dataNodeInstanceAddr;
@property (nonatomic) AWETrackerDataTransmissionNode preTransNode;
@property (nonatomic) NSMutableArray nextTransNodes;
@property (nonatomic) NSObject obj;
- (void)setDataNodeClassStr:;
- (void)setDataNodeInstanceAddr:;
- (id)initWithObj:;
- (id)dataNodeClassStr;
- (id)preTransNode;
- (id)nextTransNodes;
- (void)setPreTransNode:;
- (id)getNextTransNodes;
- (double)allocTimeStamp;
- (void)setAllocTimeStamp:;
- (unsigned long long)dataNodeInstanceAddr;
- (void)setNextTransNodes:;
- (id)description;
- (void).cxx_destruct;
- (id)obj;
- (void)setObj:;
+ (id)nodeWithObj:;
@end
