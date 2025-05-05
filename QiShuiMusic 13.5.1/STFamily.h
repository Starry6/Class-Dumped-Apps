@interface STFamily : NSObject
@property (nonatomic) NSString dataSource;
@property (nonatomic) NSArray members;
@property (nonatomic) STFamilyMember me;
- (id)members;
- (void)setDataSource:;
- (void)setMe:;
- (id)me;
- (void)setMembers:;
- (id)initWithFamilyCircle:;
- (id)dataSource;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithMembers:;
- (id)copyWithZone:;
@end
