@interface BDMicrophonePrivacyCertEntry : BDPrivacyCertEntry
+ (int)AUGraphStart:privacyCert:error:;
+ (int)AUGraphStop:privacyCert:error:;
+ (void)requestAccessMicrophoneWithPrivacyCert:completionHandler:;
+ (void)requestRecordPermission:audioSession:privacyCert:;
+ (int)startAudioOutputUnitWithAudioUnit:privacyCert:error:;
+ (int)stopAudioOutputUnitWithAudioUnit:privacyCert:error:;
@end
