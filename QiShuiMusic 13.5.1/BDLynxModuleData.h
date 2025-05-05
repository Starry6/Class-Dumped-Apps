@interface BDLynxModuleData : NSObject
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString cardID;
@property (nonatomic) NSString storagePath;
@property (nonatomic) NSString verifyURL;
@property (nonatomic) NSString publishVersion;
@property (nonatomic) NSDictionary customFileds;
@property (nonatomic) BOOL iSOneCard;
- (id)customFileds;
- (BOOL)iSOneCard;
- (id)publishVersion;
- (void)setCustomFileds:;
- (void)setISOneCard:;
- (void)setPublishVersion:;
- (void)setVerifyURL:;
- (id)verifyURL;
- (id)storagePath;
- (void)setGroupID:;
- (id)groupID;
- (void).cxx_destruct;
- (void)setStoragePath:;
- (id)cardID;
- (void)setCardID:;
@end
