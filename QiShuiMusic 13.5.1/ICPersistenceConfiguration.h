@interface ICPersistenceConfiguration : NSObject
@property (nonatomic) NSManagedObjectContext modernViewContext;
@property (nonatomic) NSManagedObjectContext modernBackgroundContext;
@property (nonatomic) NSManagedObjectContext legacyViewContext;
@property (nonatomic) NSManagedObjectContext legacyBackgroundContext;
- (void).cxx_destruct;
- (id)modernViewContext;
- (void)setModernViewContext:;
- (id)legacyViewContext;
- (void)setLegacyViewContext:;
- (id)modernBackgroundContext;
- (void)setModernBackgroundContext:;
- (id)legacyBackgroundContext;
- (void)setLegacyBackgroundContext:;
@end
