@interface SAPhoneVoiceMail : SAPhoneCallSearchResult
@property (nonatomic) NSString filePath;
@property (nonatomic) NSNumber length;
- (id)filePath;
- (id)groupIdentifier;
- (void)setFilePath:;
- (id)encodedClassName;
- (id)length;
- (void)setLength:;
+ (id)voiceMail;
+ (id)voiceMailWithDictionary:context:;
@end
