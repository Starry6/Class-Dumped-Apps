@interface APRiskRemoteLoggerDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)writeEventLog:;
- (void)writeLogWithActionId:extParams:appId:seed:ucId:;
- (void)writeLogWithActionId:extParams:appId:seed:ucId:bizType:;
@end
