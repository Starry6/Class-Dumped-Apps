@interface ICIAMApplicationMessageSyncResponse : PBCodable
@property (nonatomic) BOOL hasBundleID;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSMutableArray syncCommands;
- (BOOL)hasBundleID;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)bundleID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setBundleID:;
- (void)clearSyncCommands;
- (void)addSyncCommands:;
- (unsigned long long)syncCommandsCount;
- (id)syncCommandsAtIndex:;
- (id)syncCommands;
- (void)setSyncCommands:;
+ (Class)syncCommandsType;
@end
