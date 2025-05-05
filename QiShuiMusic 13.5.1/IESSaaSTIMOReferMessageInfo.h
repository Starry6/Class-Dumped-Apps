@interface IESSaaSTIMOReferMessageInfo : MTLModel
@property (nonatomic) q serverMessageID;
@property (nonatomic) q messageType;
@property (nonatomic) NSString hint;
@property (nonatomic) q status;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)serverMessageID;
- (void)setServerMessageID:;
- (void)setStatus:;
- (long long)messageType;
- (id)toDictionary;
- (void).cxx_destruct;
- (void)setMessageType:;
- (long long)status;
- (void)setHint:;
- (id)hint;
@end
