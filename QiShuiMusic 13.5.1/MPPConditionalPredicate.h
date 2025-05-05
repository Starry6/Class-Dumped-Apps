@interface MPPConditionalPredicate : PBCodable
@property (nonatomic) BOOL hasConditionalPredicate;
@property (nonatomic) MPPMediaPredicate conditionalPredicate;
@property (nonatomic) BOOL hasThenPredicate;
@property (nonatomic) MPPMediaPredicate thenPredicate;
@property (nonatomic) BOOL hasElsePredicate;
@property (nonatomic) MPPMediaPredicate elsePredicate;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)thenPredicate;
- (id)elsePredicate;
- (BOOL)hasConditionalPredicate;
- (BOOL)hasThenPredicate;
- (BOOL)hasElsePredicate;
- (id)conditionalPredicate;
- (void)setConditionalPredicate:;
- (void)setThenPredicate:;
- (void)setElsePredicate:;
@end
