@interface HSUpdateResponse : HSResponse
@property (nonatomic) I databaseRevision;
- (unsigned int)databaseRevision;
- (void)setDatabaseRevision:;
@end
