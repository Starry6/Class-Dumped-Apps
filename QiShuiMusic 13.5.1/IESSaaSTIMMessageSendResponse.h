@interface IESSaaSTIMMessageSendResponse : IESSaaSTIMPBNSendMessageResponseBody
@property (nonatomic) NSString logID;
@property (nonatomic) NSArray requestToMonitorArray;
@property (nonatomic) NSArray processDurationMonitorArray;
- (void)setProcessDurationMonitorArray:;
- (id)initWithPBBody:;
- (id)processDurationMonitorArray;
- (id)requestToMonitorArray;
- (void)setRequestToMonitorArray:;
- (void).cxx_destruct;
- (id)logID;
- (void)setLogID:;
@end
