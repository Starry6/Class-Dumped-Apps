@interface IESLatchModule : NSObject
@property (nonatomic) <IESLatchModuleDelegate> delegate;
@property (nonatomic) double startTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getFromInitialProps:;
- (id)getGlobalProps;
- (id)getSDKVersion;
- (void)initJsFinished;
- (id)initWithParam:;
- (void)onErrorWithOccasion:message:extra:;
- (void)onLogWithOccasion:message:;
- (void)readyToRunScript;
- (void)returnValue:;
- (void)attach:;
- (id)init;
- (void)setStartTime:;
- (void)setDelegate:;
- (double)startTime;
- (id)delegate;
- (void).cxx_destruct;
+ (id)methodLookup;
+ (id)name;
@end
