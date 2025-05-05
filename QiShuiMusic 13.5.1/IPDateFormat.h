@interface IPDateFormat : IPFormat
@property (nonatomic) NSString option;
@property (nonatomic) NSString title;
- (id)title;
- (void).cxx_destruct;
- (id)option;
- (id)initWithOption:title:;
+ (void)setDateFormat:;
+ (double)sampleTime;
+ (id)dateFormatterFromLocale;
+ (id)dateFormatterFromLanguage;
+ (id)dateFormatFromFormatter:style:;
+ (id)availableDateFormats;
+ (id)currentDateFormat;
+ (BOOL)dateFormatIsAllNumeric:;
@end
