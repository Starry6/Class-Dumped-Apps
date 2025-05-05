@interface BUAdSDKTestToolManager : BUInterfaceBaseObject
@property (nonatomic) BUAdSDKTestToolManager iteration;
- (id)testTimeStamp;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setIteration:;
- (id)iteration;
+ (void)clearIPAddress;
+ (void)clearInputContent;
+ (void)setHostIP:;
+ (void)setInputOneContent:;
+ (void)setInputTwoContent:;
+ (id)allocWithZone:;
+ (id)sharedInstance;
+ (void)setHostPort:;
@end
