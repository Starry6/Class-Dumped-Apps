@interface HSFairPlayInfo : NSObject
@property (nonatomic) NSString deviceGUID;
- (id)init;
- (void)dealloc;
- (id)deviceGUID;
- (void).cxx_destruct;
- (id)securityInfoForURL:;
- (id)beginNegotiationWithSAPVersion:;
- (id)continueNegotationWithSAPVersion:data:isComplete:;
- (void)endSecuritySession;
- (BOOL)_getHardwareInfo:;
- (id)_hexStringForData:;
@end
