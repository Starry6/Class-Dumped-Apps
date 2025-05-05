@interface ICSDocument : NSObject
- (id)calendar;
- (BOOL)validate:;
- (id)initWithContentsOfURL:options:error:;
- (id)initWithData:options:error:;
- (id)initWithCalendar:;
- (void).cxx_destruct;
- (id)ICSDataWithOptions:;
- (id)ICSStringWithOptions:;
- (id)initWithICSString:options:error:;
- (id)initWithData:encoding:options:error:;
- (id)initWithData:encoding:options:delegate:error:;
- (void)validateParsedCalendar:;
- (id)ICSCompressedDataWithOptions:;
- (id)ICSChecksumStringForVersion:;
- (id)ICSChecksumForVersion:;
+ (void)suppressParserSyntaxErrorLogging;
+ (int)ICSChecksumVersionSpecifiedInOptions:;
@end
