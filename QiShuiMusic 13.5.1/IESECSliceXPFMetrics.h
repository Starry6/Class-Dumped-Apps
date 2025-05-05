@interface IESECSliceXPFMetrics : NSObject
@property (nonatomic) NSMutableArray phases;
@property (nonatomic) NSDictionary extraParams;
- (void)appendPhaseWithName:timestamp:;
- (id)extraParams;
- (id)initWithStartTimeStamp:extraParams:;
- (void).cxx_destruct;
- (id)phases;
@end
