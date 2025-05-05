@interface BDXBridgeAudioSelectionMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSNumber errorCode;
@property (nonatomic) NSString fileName;
@property (nonatomic) NSString fileSize;
@property (nonatomic) NSString machine;
@property (nonatomic) NSString msg;
@property (nonatomic) NSString type;
@property (nonatomic) BDXBridgeAudioSelectionServerResponse serverResponse;
- (id)machine;
- (void)setMachine:;
- (id)fileSize;
- (id)fileName;
- (id)errorCode;
- (void)setType:;
- (id)serverResponse;
- (void)setDuration:;
- (id)type;
- (void)setFileSize:;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (void)setFileName:;
- (id)duration;
- (void)setServerResponse:;
- (id)msg;
- (void)setMsg:;
+ (id)serverResponseJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
