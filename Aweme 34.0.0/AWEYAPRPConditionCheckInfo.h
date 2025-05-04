@interface AWEYAPRPConditionCheckInfo : AWEBaseApiModel
@property (nonatomic) BOOL canRecv;
@property (nonatomic) NSString recvButtonDesc;
- (BOOL)canRecv;
- (void)setCanRecv:;
- (id)recvButtonDesc;
- (void)setRecvButtonDesc:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
