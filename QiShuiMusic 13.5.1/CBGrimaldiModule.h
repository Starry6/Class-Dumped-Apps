@interface CBGrimaldiModule : CBModule
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleNotificationForKey:withProperty:;
- (void)dealloc;
- (void)start;
- (void)sendNotificationForKey:withValue:;
- (id)copyPropertyForKey:withParameter:;
- (void)stop;
- (void)registerNotificationBlock:;
- (id)copyPropertyForKey:;
- (BOOL)setProperty:forKey:;
- (void)unregisterNotificationBlock;
- (id)initWithQueue:;
- (id)copyParam:;
- (BOOL)loadAPDS;
- (void)startWithFrequency:;
- (void)startSingleSample;
- (void)startWithFrequency:singleSample:;
- (void)clearOutput;
- (void)CBAPDSGetLux;
- (void)setGrimaldiLux;
- (int)getNextNumberOfSamplesFromNewLux:;
- (id)copyReliableLux;
@end
