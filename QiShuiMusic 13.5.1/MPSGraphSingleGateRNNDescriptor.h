@interface MPSGraphSingleGateRNNDescriptor : NSObject
@property (nonatomic) BOOL reverse;
@property (nonatomic) BOOL bidirectional;
@property (nonatomic) BOOL training;
@property (nonatomic) Q activation;
- (BOOL)reverse;
- (BOOL)bidirectional;
- (id)copyWithZone:;
- (void)setReverse:;
- (BOOL)training;
- (void)setTraining:;
- (unsigned long long)activation;
- (void)setActivation:;
- (void)setBidirectional:;
+ (id)descriptor;
@end
