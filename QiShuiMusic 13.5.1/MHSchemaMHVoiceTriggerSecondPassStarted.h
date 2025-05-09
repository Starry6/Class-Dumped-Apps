@interface MHSchemaMHVoiceTriggerSecondPassStarted : SISchemaInstrumentationMessage
@property (nonatomic) I firstPassDetectedChannel;
@property (nonatomic) BOOL hasFirstPassDetectedChannel;
@property (nonatomic) float firstPassScore;
@property (nonatomic) BOOL hasFirstPassScore;
@property (nonatomic) I firstPassOnsetChannel;
@property (nonatomic) BOOL hasFirstPassOnsetChannel;
@property (nonatomic) float firstPassOnsetScore;
@property (nonatomic) BOOL hasFirstPassOnsetScore;
@property (nonatomic) NSArray channelSelectionScores;
@property (nonatomic) Q firstPassChannelSelectionDelayNs;
@property (nonatomic) BOOL hasFirstPassChannelSelectionDelayNs;
@property (nonatomic) float firstPassMasterChannelScoreBoost;
@property (nonatomic) BOOL hasFirstPassMasterChannelScoreBoost;
@property (nonatomic) Q firstPassStartSampleCount;
@property (nonatomic) BOOL hasFirstPassStartSampleCount;
@property (nonatomic) Q firstPassEndSampleCount;
@property (nonatomic) BOOL hasFirstPassEndSampleCount;
@property (nonatomic) Q firstPassFireSampleCount;
@property (nonatomic) BOOL hasFirstPassFireSampleCount;
@property (nonatomic) NSInteger firstPassTriggerSource;
@property (nonatomic) BOOL hasFirstPassTriggerSource;
@property (nonatomic) Q earlyDetectFiredTimeOffsetInNs;
@property (nonatomic) BOOL hasEarlyDetectFiredTimeOffsetInNs;
@property (nonatomic) float earlyDetectFiredTime;
@property (nonatomic) BOOL hasEarlyDetectFiredTime;
@property (nonatomic) float firstPassPrimaryChannelScoreBoost;
@property (nonatomic) BOOL hasFirstPassPrimaryChannelScoreBoost;
@property (nonatomic) Q firstPassInfoDispatchTimeInNs;
@property (nonatomic) BOOL hasFirstPassInfoDispatchTimeInNs;
@property (nonatomic) Q firstPassInfoReceptionTimeInNs;
@property (nonatomic) BOOL hasFirstPassInfoReceptionTimeInNs;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)channelSelectionScores;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setChannelSelectionScores:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setFirstPassScore:;
- (BOOL)hasFirstPassScore;
- (void)setHasFirstPassScore:;
- (void)deleteFirstPassScore;
- (float)firstPassScore;
- (void)setFirstPassTriggerSource:;
- (BOOL)hasFirstPassTriggerSource;
- (void)setHasFirstPassTriggerSource:;
- (void)deleteFirstPassTriggerSource;
- (int)firstPassTriggerSource;
- (void)setFirstPassDetectedChannel:;
- (BOOL)hasFirstPassDetectedChannel;
- (void)setHasFirstPassDetectedChannel:;
- (void)deleteFirstPassDetectedChannel;
- (void)setFirstPassOnsetChannel:;
- (BOOL)hasFirstPassOnsetChannel;
- (void)setHasFirstPassOnsetChannel:;
- (void)deleteFirstPassOnsetChannel;
- (void)setFirstPassOnsetScore:;
- (BOOL)hasFirstPassOnsetScore;
- (void)setHasFirstPassOnsetScore:;
- (void)deleteFirstPassOnsetScore;
- (void)clearChannelSelectionScores;
- (void)deleteChannelSelectionScores;
- (void)addChannelSelectionScores:;
- (unsigned long long)channelSelectionScoresCount;
- (id)channelSelectionScoresAtIndex:;
- (void)setFirstPassChannelSelectionDelayNs:;
- (BOOL)hasFirstPassChannelSelectionDelayNs;
- (void)setHasFirstPassChannelSelectionDelayNs:;
- (void)deleteFirstPassChannelSelectionDelayNs;
- (void)setFirstPassMasterChannelScoreBoost:;
- (BOOL)hasFirstPassMasterChannelScoreBoost;
- (void)setHasFirstPassMasterChannelScoreBoost:;
- (void)deleteFirstPassMasterChannelScoreBoost;
- (void)setFirstPassStartSampleCount:;
- (BOOL)hasFirstPassStartSampleCount;
- (void)setHasFirstPassStartSampleCount:;
- (void)deleteFirstPassStartSampleCount;
- (void)setFirstPassEndSampleCount:;
- (BOOL)hasFirstPassEndSampleCount;
- (void)setHasFirstPassEndSampleCount:;
- (void)deleteFirstPassEndSampleCount;
- (void)setFirstPassFireSampleCount:;
- (BOOL)hasFirstPassFireSampleCount;
- (void)setHasFirstPassFireSampleCount:;
- (void)deleteFirstPassFireSampleCount;
- (void)setEarlyDetectFiredTimeOffsetInNs:;
- (BOOL)hasEarlyDetectFiredTimeOffsetInNs;
- (void)setHasEarlyDetectFiredTimeOffsetInNs:;
- (void)deleteEarlyDetectFiredTimeOffsetInNs;
- (void)setEarlyDetectFiredTime:;
- (BOOL)hasEarlyDetectFiredTime;
- (void)setHasEarlyDetectFiredTime:;
- (void)deleteEarlyDetectFiredTime;
- (void)setFirstPassPrimaryChannelScoreBoost:;
- (BOOL)hasFirstPassPrimaryChannelScoreBoost;
- (void)setHasFirstPassPrimaryChannelScoreBoost:;
- (void)deleteFirstPassPrimaryChannelScoreBoost;
- (void)setFirstPassInfoDispatchTimeInNs:;
- (BOOL)hasFirstPassInfoDispatchTimeInNs;
- (void)setHasFirstPassInfoDispatchTimeInNs:;
- (void)deleteFirstPassInfoDispatchTimeInNs;
- (void)setFirstPassInfoReceptionTimeInNs:;
- (BOOL)hasFirstPassInfoReceptionTimeInNs;
- (void)setHasFirstPassInfoReceptionTimeInNs:;
- (void)deleteFirstPassInfoReceptionTimeInNs;
- (unsigned int)firstPassDetectedChannel;
- (unsigned int)firstPassOnsetChannel;
- (float)firstPassOnsetScore;
- (unsigned long long)firstPassChannelSelectionDelayNs;
- (float)firstPassMasterChannelScoreBoost;
- (unsigned long long)firstPassStartSampleCount;
- (unsigned long long)firstPassEndSampleCount;
- (unsigned long long)firstPassFireSampleCount;
- (unsigned long long)earlyDetectFiredTimeOffsetInNs;
- (float)earlyDetectFiredTime;
- (float)firstPassPrimaryChannelScoreBoost;
- (unsigned long long)firstPassInfoDispatchTimeInNs;
- (unsigned long long)firstPassInfoReceptionTimeInNs;
@end
