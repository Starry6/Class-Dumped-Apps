@interface AWEIMMessageCombineShareReferContent : MTLModel
@property (nonatomic) q serverMessageID;
@property (nonatomic) q messageType;
@property (nonatomic) NSString hint;
@property (nonatomic) q status;
@property (nonatomic) q refMsgIndexInConvV1;
@property (nonatomic) q refMsgIndexInConvV2;
@property (nonatomic) BOOL refMsgInvisible;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)serverMessageID;
- (void)setServerMessageID:;
- (BOOL)refMsgInvisible;
- (void)setRefMsgInvisible:;
- (void)setRefMsgIndexInConvV1:;
- (void)setRefMsgIndexInConvV2:;
- (long long)refMsgIndexInConvV1;
- (long long)refMsgIndexInConvV2;
- (id)initWithContentDic:;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
- (void)setMessageType:;
- (long long)messageType;
- (id)hint;
- (void)setHint:;
@end
