@interface DIRSComplianceConfiguration : NSObject
@property (nonatomic) DIRSConfig base;
@property (nonatomic) NSArray blockedFields;
- (id)blockedFields;
- (void)setBlockedFields:;
- (void)setBase:;
- (id)base;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
