@interface SFLiveFlowPerf : NSManagedObject
@property (nonatomic) NSNumber connAttempts;
@property (nonatomic) NSNumber connSuccesses;
@property (nonatomic) NSNumber kind;
@property (nonatomic) NSNumber overallTime;
@property (nonatomic) NSString tag;
@property (nonatomic) NSDate timeStamp;
@property (nonatomic) NSNumber timesThresholded;
@property (nonatomic) NSString tmpID;
@property (nonatomic) NSNumber txFailPackets;
@property (nonatomic) NSNumber txPackets;
@property (nonatomic) NSNumber txReTxInterval;
@property (nonatomic) NSNumber txReTxPackets;
@property (nonatomic) NSNumber usecsEstabTime;
@property (nonatomic) SFFlow hasFlow;
+ (id)entityName;
+ (id)fetchRequest;
@end
