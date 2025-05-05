@interface INJSONEncoderConfiguration : NSObject
@property (nonatomic) NSString languageCode;
@property (nonatomic) BOOL locationIncludesTimestamp;
- (id)init;
- (void)setLanguageCode:;
- (id)languageCode;
- (BOOL)locationIncludesTimestamp;
- (void).cxx_destruct;
- (void)setLocationIncludesTimestamp:;
- (id)copyWithZone:;
@end
