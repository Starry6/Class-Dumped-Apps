@interface SAPreSynthesizeTTS : SABaseClientBoundCommand
@property (nonatomic) NSArray aceAudioData;
@property (nonatomic) NSArray dialogStrings;
@property (nonatomic) NSDictionary speakableContextInfo;
@property (nonatomic) NSArray streamIds;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)aceAudioData;
- (void)setAceAudioData:;
- (id)speakableContextInfo;
- (void)setSpeakableContextInfo:;
- (id)dialogStrings;
- (void)setDialogStrings:;
- (id)streamIds;
- (void)setStreamIds:;
+ (id)preSynthesizeTTS;
+ (id)preSynthesizeTTSWithDictionary:context:;
@end
