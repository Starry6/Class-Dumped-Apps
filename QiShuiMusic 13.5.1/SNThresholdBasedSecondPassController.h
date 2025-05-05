@interface SNThresholdBasedSecondPassController : NSObject
@property (nonatomic) @? beginSecondPassHandler;
@property (nonatomic) @? endSecondPassHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)firstPassDidProduceResult:;
- (void)secondPassDidProduceResult:;
- (id)beginSecondPassHandler;
- (void)setBeginSecondPassHandler:;
- (id)endSecondPassHandler;
- (void)setEndSecondPassHandler:;
@end
