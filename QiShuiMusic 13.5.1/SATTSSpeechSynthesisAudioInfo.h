@interface SATTSSpeechSynthesisAudioInfo : AceObject
@property (nonatomic) NSArray wordTimingInfoList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)wordTimingInfoList;
- (void)setWordTimingInfoList:;
+ (id)speechSynthesisAudioInfo;
+ (id)speechSynthesisAudioInfoWithDictionary:context:;
@end
