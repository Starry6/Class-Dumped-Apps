@interface IESSaaSTIMConversationGroupManagementOperationResponseWrapper : NSObject
@property (nonatomic) IESSaaSTIMPBNResponse pbResponse;
@property (nonatomic) IESSaaSTIMPBNGetGroupManagerInfoResponseBody groupInfoBody;
@property (nonatomic) NSInteger statusCode;
@property (nonatomic) NSString errorDesc;
@property (nonatomic) NSError errorInBody;
@property (nonatomic) <IESSaaSTIMOConversationGroupManagementModelProtocol> groupManagementModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)errorInBody;
- (id)groupInfoBody;
- (id)groupManagementModel;
- (BOOL)hasErrorDesc;
- (void)setGroupInfoBody:;
- (void)setGroupManagementModel:;
- (int)statusCode;
- (void).cxx_destruct;
- (id)errorDesc;
- (BOOL)hasStatusCode;
- (id)pbResponse;
- (void)setPbResponse:;
- (id)initWithResponseObject:;
@end
