@interface AWEIMAudioTranslateResultModel : NSObject
@property (nonatomic) NSString audioText;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString servermessageID;
@property (nonatomic) NSString messageID;
@property (nonatomic) NSString uri;
- (id)secUid;
- (void)setSecUid:;
- (id)getContentDict;
- (id)audioText;
- (void)setAudioText:;
- (id)servermessageID;
- (void)setServermessageID:;
- (id)messageID;
- (id)uri;
- (void)setMessageID:;
- (void)setUri:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
