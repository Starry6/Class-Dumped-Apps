@interface NSISO8601DateFormatter : NSFormatter
@property (nonatomic) NSTimeZone timeZone;
@property (nonatomic) Q formatOptions;
- (id)stringForObjectValue:;
- (void)setTimeZone:;
- (id)init;
- (void)dealloc;
- (BOOL)getObjectValue:forString:errorDescription:;
- (id)dateFromString:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)stringFromDate:;
- (id)timeZone;
- (BOOL)getObjectValue:forString:range:error:;
- (unsigned long long)formatOptions;
- (void)setFormatOptions:;
- (void)updateFormatter;
+ (BOOL)supportsSecureCoding;
+ (id)stringFromDate:timeZone:formatOptions:;
@end
