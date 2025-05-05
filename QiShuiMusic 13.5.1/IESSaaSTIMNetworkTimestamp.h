@interface IESSaaSTIMNetworkTimestamp : NSObject
@property (nonatomic) NSInteger cmd;
@property (nonatomic) double clientStart;
@property (nonatomic) double clientEnd;
@property (nonatomic) double serverArrived;
@property (nonatomic) double serverExecuted;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setClientStart:;
- (void)setCmd:;
- (int)cmd;
- (double)clientEnd;
- (double)clientStart;
- (double)serverArrived;
- (double)serverExecuted;
- (void)setClientEnd:;
- (void)setServerArrived:;
- (void)setServerExecuted:;
@end
