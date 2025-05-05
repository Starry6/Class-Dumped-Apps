@interface TTAccountMediaUserAuditEntity : TTAccountUserAuditEntity
@property (nonatomic) BOOL auditing;
@property (nonatomic) NSNumber expiredTime;
@property (nonatomic) BOOL isPersonalPGC;
- (void)setExpiredTime:;
- (BOOL)auditing;
- (id)expiredTime;
- (id)initWithMediaAuditModel:;
- (BOOL)isPersonalPGC;
- (void)setAuditing:;
- (void)setIsPersonalPGC:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
@end
