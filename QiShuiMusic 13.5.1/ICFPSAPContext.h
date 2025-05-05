@interface ICFPSAPContext : NSObject
- (void)dealloc;
- (BOOL)signData:returningSignatureData:error:;
- (id)initReturningError:;
- (BOOL)processResponseWithSignatureData:data:error:;
- (BOOL)exchangeWithSAPVersion:data:returningData:exchangeStatus:error:;
@end
