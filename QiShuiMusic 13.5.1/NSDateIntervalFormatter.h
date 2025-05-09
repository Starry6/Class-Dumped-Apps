@interface NSDateIntervalFormatter : NSFormatter
@property (nonatomic) NSLocale locale;
@property (nonatomic) NSCalendar calendar;
@property (nonatomic) NSTimeZone timeZone;
@property (nonatomic) NSString dateTemplate;
@property (nonatomic) Q dateStyle;
@property (nonatomic) Q timeStyle;
- (id)stringForObjectValue:;
- (void)setCalendar:;
- (void)setLocale:;
- (void)setTimeZone:;
- (id)init;
- (id)calendar;
- (void)dealloc;
- (BOOL)getObjectValue:forString:errorDescription:;
- (id)locale;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)stringFromDate:toDate:;
- (id)timeZone;
- (BOOL)isPartialStringValid:proposedSelectedRange:originalString:originalSelectedRange:errorDescription:;
- (id)copyWithZone:;
- (void)setDateTemplate:;
- (void)setDateStyle:;
- (void)setTimeStyle:;
- (unsigned long long)dateStyle;
- (unsigned long long)timeStyle;
- (id)attributedStringForObjectValue:withDefaultAttributes:;
- (id)editingStringForObjectValue:;
- (BOOL)isPartialStringValid:newEditingString:errorDescription:;
- (id)dateTemplate;
- (unsigned long long)boundaryStyle;
- (void)setBoundaryStyle:;
- (id)stringFromDateInterval:;
- (id)_stringFromDate:toDate:;
@end
