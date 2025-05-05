@interface MRSendCommandResultStatus : NSObject
@property (nonatomic) _MRSendCommandResultStatusProtobuf protobuf;
@property (nonatomic) I statusCode;
@property (nonatomic) q statusType;
@property (nonatomic) MRSendCommandHandlerDialog dialog;
@property (nonatomic) NSError commandError;
@property (nonatomic) NSData customData;
@property (nonatomic) NSString customDataType;
- (unsigned int)statusCode;
- (id)initWithProtobuf:;
- (long long)statusType;
- (id)protobuf;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)dialog;
- (id)customData;
- (id)customDataType;
- (id)initWithStatusType:statusCode:dialog:customData:customDataType:error:;
- (id)commandError;
+ (id)successStatus;
+ (id)statusWithCode:;
+ (id)statusWithCode:error:;
+ (id)statusWithCode:dialog:;
+ (id)statusWithCode:customData:type:;
@end
