@interface AWDCoreRoutineModelTransitionInstance : PBCodable
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) I duration;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) I distance;
@property (nonatomic) BOOL hasTransitionHistogram;
@property (nonatomic) AWDCoreRoutineTransitionMotionType transitionHistogram;
- (unsigned int)distance;
- (void)dealloc;
- (BOOL)hasDuration;
- (void)setHasDuration:;
- (void)setDistance:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setDuration:;
- (void)mergeFrom:;
- (BOOL)hasDistance;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (BOOL)isEqual:;
- (void)setHasDistance:;
- (id)copyWithZone:;
- (BOOL)hasTransitionHistogram;
- (id)transitionHistogram;
- (void)setTransitionHistogram:;
@end
