@interface AWDSpringBoardSwitcherPresentationInteraction : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) NSString source;
@property (nonatomic) BOOL hasDidCommit;
@property (nonatomic) BOOL didCommit;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (id)source;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (BOOL)hasSource;
- (id)dictionaryRepresentation;
- (void)setSource:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)didCommit;
- (void)setDidCommit:;
- (void)setHasDidCommit:;
- (BOOL)hasDidCommit;
@end
