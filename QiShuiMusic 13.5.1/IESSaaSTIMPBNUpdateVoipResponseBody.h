@interface IESSaaSTIMPBNUpdateVoipResponseBody : GPBMessage
@property (nonatomic) IESSaaSTIMPBNVoipInfo info;
@property (nonatomic) BOOL hasInfo;
@property (nonatomic) NSInteger statusCode;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) NSInteger voipMode;
@property (nonatomic) BOOL hasVoipMode;
@property (nonatomic) GPBInt64Array calleesArray;
@property (nonatomic) Q calleesArray_Count;
+ (id)descriptor;
@end
