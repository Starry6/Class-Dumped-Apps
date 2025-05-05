@interface BDUGUploadTokenRequestParam : BDUGBaseRequestParam
@property (nonatomic) NSString token;
@property (nonatomic) NSArray senderTokenList;
@property (nonatomic) NSString eventName;
- (id)senderTokenList;
- (void)setSenderTokenList:;
- (id)token;
- (void)setToken:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
@end
