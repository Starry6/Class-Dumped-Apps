@interface BDTuringPiperCommand : NSObject
@property (nonatomic) q piperType;
@property (nonatomic) NSString messageType;
@property (nonatomic) NSString name;
@property (nonatomic) NSString callbackID;
@property (nonatomic) NSDictionary params;
@property (nonatomic) @? callCompletion;
@property (nonatomic) @? onHandler;
- (void)addCode:response:type:;
- (id)callCompletion;
- (id)callbackID;
- (id)initWithName:onHandler:;
- (id)onHandler;
- (long long)piperType;
- (void)setCallCompletion:;
- (void)setCallbackID:;
- (void)setOnHandler:;
- (void)setPiperType:;
- (id)toJSONString;
- (id)messageType;
- (void)setName:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (void)setMessageType:;
- (id)name;
- (id)params;
- (void)setParams:;
@end
