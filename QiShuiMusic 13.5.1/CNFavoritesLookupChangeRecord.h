@interface CNFavoritesLookupChangeRecord : NSObject
@property (nonatomic) NSInteger identifier;
@property (nonatomic) NSInteger uid;
@property (nonatomic) NSString value;
@property (nonatomic) NSString name;
@property (nonatomic) NSString label;
@property (nonatomic) NSString abDatabaseUUID;
- (void)setName:;
- (int)uid;
- (void)setUid:;
- (int)identifier;
- (void)setLabel:;
- (id)label;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (id)name;
- (void)setIdentifier:;
- (id)abDatabaseUUID;
- (void)setAbDatabaseUUID:;
@end
