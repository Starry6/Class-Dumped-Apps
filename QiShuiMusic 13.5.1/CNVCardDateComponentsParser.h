@interface CNVCardDateComponentsParser : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)gregorianDateComponentsWithParser:;
- (id)dateComponentsFromString:omitYear:;
- (id)dateComponentsWithParser:;
- (id)dateComponentsFromString:calendarIdentifier:;
@end
