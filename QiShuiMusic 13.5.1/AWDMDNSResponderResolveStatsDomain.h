@interface AWDMDNSResponderResolveStatsDomain : PBCodable
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray hostnames;
- (void)dealloc;
- (void)setName:;
- (BOOL)hasName;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)hostnames;
- (void)clearHostnames;
- (void)addHostname:;
- (unsigned long long)hostnamesCount;
- (id)hostnameAtIndex:;
- (void)setHostnames:;
+ (Class)hostnameType;
@end
