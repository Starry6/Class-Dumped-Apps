@interface WXCardItem : NSObject
@property (nonatomic) NSString cardId;
@property (nonatomic) NSString extMsg;
@property (nonatomic) I cardState;
@property (nonatomic) NSString encryptCode;
@property (nonatomic) NSString appID;
- (void)setEncryptCode:;
- (unsigned int)cardState;
- (id)encryptCode;
- (id)extMsg;
- (void)setCardState:;
- (void)setExtMsg:;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
- (id)cardId;
- (void)setCardId:;
@end
