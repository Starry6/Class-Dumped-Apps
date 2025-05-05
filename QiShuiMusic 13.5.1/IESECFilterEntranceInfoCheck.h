@interface IESECFilterEntranceInfoCheck : NSObject
@property (nonatomic) NSString btmChain;
@property (nonatomic) NSString errorType;
@property (nonatomic) NSString entranceInfo;
@property (nonatomic) NSString errorKey;
- (id)btmChain;
- (id)entranceInfo;
- (void)setBtmChain:;
- (void)setEntranceInfo:;
- (void)setErrorKey:;
- (void).cxx_destruct;
- (id)errorKey;
- (id)errorType;
- (void)setErrorType:;
@end
