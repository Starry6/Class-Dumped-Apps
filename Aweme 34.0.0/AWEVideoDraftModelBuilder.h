@interface AWEVideoDraftModelBuilder : NSObject
@property (nonatomic) NSString draftID;
@property (nonatomic) NSNumber saveDate;
@property (nonatomic) NSNumber draftStatus;
@property (nonatomic) NSNumber expireTime;
@property (nonatomic) NSNumber draftType;
@property (nonatomic) NSNumber backup;
- (id)draftID;
- (void)setDraftType:;
- (void)setSaveDate:;
- (id)saveDate;
- (id)backup;
- (void)setBackup:;
- (void)setDraftID:;
- (id)draftStatus;
- (void)setDraftStatus:;
- (id)build;
- (void).cxx_destruct;
- (id)expireTime;
- (void)setExpireTime:;
- (id)draftType;
@end
