@interface PersonLinkingPersonPair : PBCodable
@property (nonatomic) BOOL hasGraphPerson;
@property (nonatomic) PersonLinkingPerson graphPerson;
@property (nonatomic) BOOL hasSourcePerson;
@property (nonatomic) PersonLinkingPerson sourcePerson;
@property (nonatomic) BOOL hasGrade;
@property (nonatomic) BOOL grade;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)grade;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (void)setGrade:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasGraphPerson;
- (BOOL)hasSourcePerson;
- (void)setHasGrade:;
- (BOOL)hasGrade;
- (id)graphPerson;
- (void)setGraphPerson:;
- (id)sourcePerson;
- (void)setSourcePerson:;
@end
