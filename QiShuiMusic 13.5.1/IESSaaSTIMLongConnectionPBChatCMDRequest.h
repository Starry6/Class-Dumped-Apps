@interface IESSaaSTIMLongConnectionPBChatCMDRequest : IESSaaSTIMLongConnectionPBRequest
@property (nonatomic) NSString logToken;
- (id)init;
- (void).cxx_destruct;
- (void)willSend;
- (id)logToken;
- (void)setLogToken:;
+ (Class)callbackClass;
@end
