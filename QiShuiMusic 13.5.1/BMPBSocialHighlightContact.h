@interface BMPBSocialHighlightContact : PBCodable
@property (nonatomic) BOOL hasIsSignificant;
@property (nonatomic) BOOL isSignificant;
@property (nonatomic) BOOL hasHandle;
@property (nonatomic) NSString handle;
@property (nonatomic) BOOL hasIsMe;
@property (nonatomic) BOOL isMe;
- (BOOL)isMe;
- (void)setIsMe:;
- (id)handle;
- (void)setHandle:;
- (void)writeTo:;
- (BOOL)hasIsMe;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)hasHandle;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (void)setHasIsMe:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isSignificant;
- (void)setIsSignificant:;
- (void)setHasIsSignificant:;
- (BOOL)hasIsSignificant;
@end
