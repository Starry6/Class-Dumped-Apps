@interface AWDCoreRoutineLearnedRouteInstance : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasNumberOfInputLocations;
@property (nonatomic) NSInteger numberOfInputLocations;
@property (nonatomic) BOOL hasNumberOfFilteredLocations;
@property (nonatomic) NSInteger numberOfFilteredLocations;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) NSInteger length;
@property (nonatomic) BOOL hasRecoveryTime;
@property (nonatomic) NSInteger recoveryTime;
@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) NSInteger failureReason;
@property (nonatomic) BOOL hasLatitudeTruncated;
@property (nonatomic) NSInteger latitudeTruncated;
@property (nonatomic) BOOL hasLongitudeTruncated;
@property (nonatomic) NSInteger longitudeTruncated;
@property (nonatomic) NSMutableArray roadClassHistograms;
@property (nonatomic) NSMutableArray locationTypeHistograms;
@property (nonatomic) Q majorGapLengthsCount;
@property (nonatomic) ^i majorGapLengths;
- (int)failureReason;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (BOOL)hasLength;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setHasLength:;
- (void)setTimestamp:;
- (void)setFailureReason:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (int)length;
- (id)dictionaryRepresentation;
- (void)setLength:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasFailureReason:;
- (BOOL)hasFailureReason;
- (int)recoveryTime;
- (void)setNumberOfInputLocations:;
- (void)setHasNumberOfInputLocations:;
- (BOOL)hasNumberOfInputLocations;
- (void)setNumberOfFilteredLocations:;
- (void)setHasNumberOfFilteredLocations:;
- (BOOL)hasNumberOfFilteredLocations;
- (void)setRecoveryTime:;
- (void)setHasRecoveryTime:;
- (BOOL)hasRecoveryTime;
- (void)setLatitudeTruncated:;
- (void)setHasLatitudeTruncated:;
- (BOOL)hasLatitudeTruncated;
- (void)setLongitudeTruncated:;
- (void)setHasLongitudeTruncated:;
- (BOOL)hasLongitudeTruncated;
- (void)clearRoadClassHistograms;
- (void)addRoadClassHistogram:;
- (unsigned long long)roadClassHistogramsCount;
- (id)roadClassHistogramAtIndex:;
- (void)clearLocationTypeHistograms;
- (void)addLocationTypeHistogram:;
- (unsigned long long)locationTypeHistogramsCount;
- (id)locationTypeHistogramAtIndex:;
- (unsigned long long)majorGapLengthsCount;
- (id)majorGapLengths;
- (void)clearMajorGapLengths;
- (void)addMajorGapLength:;
- (int)majorGapLengthAtIndex:;
- (void)setMajorGapLengths:count:;
- (int)numberOfInputLocations;
- (int)numberOfFilteredLocations;
- (int)latitudeTruncated;
- (int)longitudeTruncated;
- (id)roadClassHistograms;
- (void)setRoadClassHistograms:;
- (id)locationTypeHistograms;
- (void)setLocationTypeHistograms:;
+ (Class)roadClassHistogramType;
+ (Class)locationTypeHistogramType;
@end
