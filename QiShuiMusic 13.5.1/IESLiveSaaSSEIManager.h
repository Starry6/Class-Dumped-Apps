@interface IESLiveSaaSSEIManager : NSObject
@property (nonatomic) @? rtcSEIProcess;
@property (nonatomic) NSDictionary metaSEI;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addSEIListener:;
- (id)metaSEI;
- (void)addSEIParser:;
- (void)didSetAttachingDIContext;
- (void)dispatchParserResult:;
- (id)initByAcnhor;
- (void)onMetaInfoReceived:;
- (void)onRTCInfoReceived:;
- (void)packageParsers;
- (void)removeSEIListener:;
- (void)removeSEIParserWithType:;
- (id)rtcSEIProcess;
- (void)setMetaSEI:;
- (void)setRtcSEIProcess:;
- (void)setupParser;
- (void)setupRTCSEIProcess;
- (void)setupSEIManagerWithPlayer:;
- (void)useMetaSEIImmediately;
- (id)initWithPlayer:;
- (void).cxx_destruct;
@end
