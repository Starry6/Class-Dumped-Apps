@interface POMMESSchemaPOMMESFunctionPerformanceProfile : SISchemaInstrumentationMessage
@property (nonatomic) double startTimeIntervalSince2001InMs;
@property (nonatomic) BOOL hasStartTimeIntervalSince2001InMs;
@property (nonatomic) double durationInMs;
@property (nonatomic) BOOL hasDurationInMs;
@property (nonatomic) NSString fileId;
@property (nonatomic) BOOL hasFileId;
@property (nonatomic) NSInteger lineNumber;
@property (nonatomic) BOOL hasLineNumber;
@property (nonatomic) NSString callingFunction;
@property (nonatomic) BOOL hasCallingFunction;
@property (nonatomic) NSString measurementLabel;
@property (nonatomic) BOOL hasMeasurementLabel;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setLineNumber:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (int)lineNumber;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setDurationInMs:;
- (BOOL)hasDurationInMs;
- (void)setHasDurationInMs:;
- (void)deleteDurationInMs;
- (double)durationInMs;
- (void)setStartTimeIntervalSince2001InMs:;
- (BOOL)hasStartTimeIntervalSince2001InMs;
- (void)setHasStartTimeIntervalSince2001InMs:;
- (void)deleteStartTimeIntervalSince2001InMs;
- (BOOL)hasFileId;
- (void)deleteFileId;
- (BOOL)hasLineNumber;
- (void)setHasLineNumber:;
- (void)deleteLineNumber;
- (BOOL)hasCallingFunction;
- (void)deleteCallingFunction;
- (BOOL)hasMeasurementLabel;
- (void)deleteMeasurementLabel;
- (double)startTimeIntervalSince2001InMs;
- (id)fileId;
- (void)setFileId:;
- (id)callingFunction;
- (void)setCallingFunction:;
- (id)measurementLabel;
- (void)setMeasurementLabel:;
- (void)setHasFileId:;
- (void)setHasCallingFunction:;
- (void)setHasMeasurementLabel:;
@end
