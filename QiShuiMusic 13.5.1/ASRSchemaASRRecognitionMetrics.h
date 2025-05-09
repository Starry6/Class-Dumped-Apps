@interface ASRSchemaASRRecognitionMetrics : SISchemaInstrumentationMessage
@property (nonatomic) Q personalizedLanguageModelAgeInNs;
@property (nonatomic) BOOL hasPersonalizedLanguageModelAgeInNs;
@property (nonatomic) float personalizedLanguageModelWeight;
@property (nonatomic) BOOL hasPersonalizedLanguageModelWeight;
@property (nonatomic) ASRSchemaASRRecognizerComponents recognizerComponents;
@property (nonatomic) BOOL hasRecognizerComponents;
@property (nonatomic) float averageActiveTokensPerFrame;
@property (nonatomic) BOOL hasAverageActiveTokensPerFrame;
@property (nonatomic) NSArray languageModelInterpolationWeights;
@property (nonatomic) float signalToNoiseRatioInDecibels;
@property (nonatomic) BOOL hasSignalToNoiseRatioInDecibels;
@property (nonatomic) Q recognitionDurationInNs;
@property (nonatomic) BOOL hasRecognitionDurationInNs;
@property (nonatomic) Q audioDurationInNs;
@property (nonatomic) BOOL hasAudioDurationInNs;
@property (nonatomic) BOOL eagerEnabled;
@property (nonatomic) BOOL hasEagerEnabled;
@property (nonatomic) BOOL utteranceDetectionEnabled;
@property (nonatomic) BOOL hasUtteranceDetectionEnabled;
@property (nonatomic) BOOL utteranceConcatenationEnabled;
@property (nonatomic) BOOL hasUtteranceConcatenationEnabled;
@property (nonatomic) BOOL continuousListeningEnabled;
@property (nonatomic) BOOL hasContinuousListeningEnabled;
@property (nonatomic) Q eagerCustomerPerceivedLatencyInNs;
@property (nonatomic) BOOL hasEagerCustomerPerceivedLatencyInNs;
@property (nonatomic) float cpuRealTimeFactor;
@property (nonatomic) BOOL hasCpuRealTimeFactor;
@property (nonatomic) I numLanguageModelEnrollmentDataStreams;
@property (nonatomic) BOOL hasNumLanguageModelEnrollmentDataStreams;
@property (nonatomic) NSString phoneticMatchDecoderName;
@property (nonatomic) BOOL hasPhoneticMatchDecoderName;
@property (nonatomic) Q inverseTextNormalizationDurationInNs;
@property (nonatomic) BOOL hasInverseTextNormalizationDurationInNs;
@property (nonatomic) ASRSchemaASREmojiMetrics emojiMetrics;
@property (nonatomic) BOOL hasEmojiMetrics;
@property (nonatomic) NSArray pausedAudioDurationsInNs;
@property (nonatomic) NSData jsonData;
- (BOOL)utteranceDetectionEnabled;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setUtteranceDetectionEnabled:;
- (void)setPersonalizedLanguageModelAgeInNs:;
- (BOOL)hasPersonalizedLanguageModelAgeInNs;
- (void)setHasPersonalizedLanguageModelAgeInNs:;
- (void)deletePersonalizedLanguageModelAgeInNs;
- (void)setPersonalizedLanguageModelWeight:;
- (BOOL)hasPersonalizedLanguageModelWeight;
- (void)setHasPersonalizedLanguageModelWeight:;
- (void)deletePersonalizedLanguageModelWeight;
- (BOOL)hasRecognizerComponents;
- (void)deleteRecognizerComponents;
- (void)setAverageActiveTokensPerFrame:;
- (BOOL)hasAverageActiveTokensPerFrame;
- (void)setHasAverageActiveTokensPerFrame:;
- (void)deleteAverageActiveTokensPerFrame;
- (void)clearLanguageModelInterpolationWeights;
- (void)deleteLanguageModelInterpolationWeights;
- (void)addLanguageModelInterpolationWeights:;
- (unsigned long long)languageModelInterpolationWeightsCount;
- (id)languageModelInterpolationWeightsAtIndex:;
- (void)setSignalToNoiseRatioInDecibels:;
- (BOOL)hasSignalToNoiseRatioInDecibels;
- (void)setHasSignalToNoiseRatioInDecibels:;
- (void)deleteSignalToNoiseRatioInDecibels;
- (void)setRecognitionDurationInNs:;
- (BOOL)hasRecognitionDurationInNs;
- (void)setHasRecognitionDurationInNs:;
- (void)deleteRecognitionDurationInNs;
- (void)setAudioDurationInNs:;
- (BOOL)hasAudioDurationInNs;
- (void)setHasAudioDurationInNs:;
- (void)deleteAudioDurationInNs;
- (void)setEagerEnabled:;
- (BOOL)hasEagerEnabled;
- (void)setHasEagerEnabled:;
- (void)deleteEagerEnabled;
- (BOOL)hasUtteranceDetectionEnabled;
- (void)setHasUtteranceDetectionEnabled:;
- (void)deleteUtteranceDetectionEnabled;
- (void)setUtteranceConcatenationEnabled:;
- (BOOL)hasUtteranceConcatenationEnabled;
- (void)setHasUtteranceConcatenationEnabled:;
- (void)deleteUtteranceConcatenationEnabled;
- (void)setContinuousListeningEnabled:;
- (BOOL)hasContinuousListeningEnabled;
- (void)setHasContinuousListeningEnabled:;
- (void)deleteContinuousListeningEnabled;
- (void)setEagerCustomerPerceivedLatencyInNs:;
- (BOOL)hasEagerCustomerPerceivedLatencyInNs;
- (void)setHasEagerCustomerPerceivedLatencyInNs:;
- (void)deleteEagerCustomerPerceivedLatencyInNs;
- (void)setCpuRealTimeFactor:;
- (BOOL)hasCpuRealTimeFactor;
- (void)setHasCpuRealTimeFactor:;
- (void)deleteCpuRealTimeFactor;
- (void)setNumLanguageModelEnrollmentDataStreams:;
- (BOOL)hasNumLanguageModelEnrollmentDataStreams;
- (void)setHasNumLanguageModelEnrollmentDataStreams:;
- (void)deleteNumLanguageModelEnrollmentDataStreams;
- (BOOL)hasPhoneticMatchDecoderName;
- (void)deletePhoneticMatchDecoderName;
- (void)setInverseTextNormalizationDurationInNs:;
- (BOOL)hasInverseTextNormalizationDurationInNs;
- (void)setHasInverseTextNormalizationDurationInNs:;
- (void)deleteInverseTextNormalizationDurationInNs;
- (BOOL)hasEmojiMetrics;
- (void)deleteEmojiMetrics;
- (void)clearPausedAudioDurationsInNs;
- (void)deletePausedAudioDurationsInNs;
- (void)addPausedAudioDurationsInNs:;
- (unsigned long long)pausedAudioDurationsInNsCount;
- (unsigned long long)pausedAudioDurationsInNsAtIndex:;
- (unsigned long long)personalizedLanguageModelAgeInNs;
- (float)personalizedLanguageModelWeight;
- (id)recognizerComponents;
- (void)setRecognizerComponents:;
- (float)averageActiveTokensPerFrame;
- (id)languageModelInterpolationWeights;
- (void)setLanguageModelInterpolationWeights:;
- (float)signalToNoiseRatioInDecibels;
- (unsigned long long)recognitionDurationInNs;
- (unsigned long long)audioDurationInNs;
- (BOOL)eagerEnabled;
- (BOOL)utteranceConcatenationEnabled;
- (BOOL)continuousListeningEnabled;
- (unsigned long long)eagerCustomerPerceivedLatencyInNs;
- (float)cpuRealTimeFactor;
- (unsigned int)numLanguageModelEnrollmentDataStreams;
- (id)phoneticMatchDecoderName;
- (void)setPhoneticMatchDecoderName:;
- (unsigned long long)inverseTextNormalizationDurationInNs;
- (id)emojiMetrics;
- (void)setEmojiMetrics:;
- (id)pausedAudioDurationsInNs;
- (void)setPausedAudioDurationsInNs:;
- (void)setHasRecognizerComponents:;
- (void)setHasPhoneticMatchDecoderName:;
- (void)setHasEmojiMetrics:;
@end
