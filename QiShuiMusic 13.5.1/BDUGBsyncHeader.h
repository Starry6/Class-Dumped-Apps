@interface BDUGBsyncHeader : GPBMessage
@property (nonatomic) NSInteger version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) NSString uid;
@property (nonatomic) BOOL hasUid;
@property (nonatomic) NSString did;
@property (nonatomic) BOOL hasDid;
@property (nonatomic) q ts;
@property (nonatomic) BOOL hasTs;
@property (nonatomic) NSInteger ctrl;
@property (nonatomic) BOOL hasCtrl;
@property (nonatomic) GPBInt32ObjectDictionary infos;
@property (nonatomic) Q infos_Count;
- (id)did;
- (id)uid;
- (int)ctrl;
- (void)setInfos:;
- (void)setTs:;
- (void)setUid:;
- (void)setDid:;
- (void)setVersion:;
+ (id)descriptor;
@end
