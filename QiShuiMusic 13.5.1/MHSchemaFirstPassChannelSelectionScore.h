@interface MHSchemaFirstPassChannelSelectionScore : SISchemaInstrumentationMessage
@property (nonatomic) NSString channelString;
@property (nonatomic) BOOL hasChannelString;
@property (nonatomic) float firstPassScore;
@property (nonatomic) BOOL hasFirstPassScore;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasChannelString;
- (void)deleteChannelString;
- (void)setFirstPassScore:;
- (BOOL)hasFirstPassScore;
- (void)setHasFirstPassScore:;
- (void)deleteFirstPassScore;
- (id)channelString;
- (void)setChannelString:;
- (float)firstPassScore;
- (void)setHasChannelString:;
@end
