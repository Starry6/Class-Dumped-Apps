@interface AWDCoreRoutineFMCDailyAssessments : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) NSMutableArray assessments;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)assessmentAtIndex:;
- (unsigned long long)assessmentsCount;
- (void)addAssessment:;
- (void)clearAssessments;
- (id)assessments;
- (void)setAssessments:;
+ (Class)assessmentType;
@end
