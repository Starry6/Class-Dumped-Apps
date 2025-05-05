@interface VisionSignalGradingVisionGradeEvent : PBCodable
@property (nonatomic) NSMutableArray visionGrades;
@property (nonatomic) NSMutableArray popularityEntries;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearVisionGrades;
- (void)addVisionGrades:;
- (unsigned long long)visionGradesCount;
- (id)visionGradesAtIndex:;
- (void)clearPopularityEntries;
- (void)addPopularityEntries:;
- (unsigned long long)popularityEntriesCount;
- (id)popularityEntriesAtIndex:;
- (id)visionGrades;
- (void)setVisionGrades:;
- (id)popularityEntries;
- (void)setPopularityEntries:;
+ (Class)visionGradesType;
+ (Class)popularityEntriesType;
@end
