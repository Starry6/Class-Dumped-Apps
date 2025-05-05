@interface VSPreviewRequest : NSObject
@property (nonatomic) NSString languageCode;
@property (nonatomic) NSString voiceName;
@property (nonatomic) q previewType;
@property (nonatomic) Q requestCreatedTimestamp;
- (void)setLanguageCode:;
- (id)languageCode;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)voiceName;
- (void)setVoiceName:;
- (long long)previewType;
- (void)setPreviewType:;
- (unsigned long long)requestCreatedTimestamp;
- (void)setRequestCreatedTimestamp:;
+ (BOOL)supportsSecureCoding;
@end
