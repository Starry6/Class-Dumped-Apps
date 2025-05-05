@interface SendMessageToQQResp : QQBaseResp
@property (nonatomic) NSDictionary otherInfo;
- (void)setOtherInfo:;
- (void).cxx_destruct;
- (id)otherInfo;
+ (id)respWithResult:errorDescription:extendInfo:;
+ (id)respWithResult:errorDescription:extendInfo:otherInfo:;
@end
