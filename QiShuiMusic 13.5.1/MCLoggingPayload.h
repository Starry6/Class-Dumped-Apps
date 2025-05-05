@interface MCLoggingPayload : MCPayload
@property (nonatomic) NSDictionary loggingPayload;
- (id)title;
- (void).cxx_destruct;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (BOOL)isAllowedToWriteLogging;
- (id)loggingPayload;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
