@interface WFContextualActionCalendarEventDescriptor : NSObject
@property (nonatomic) NSString eventIdentifier;
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) NSString title;
- (id)uniqueIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)eventIdentifier;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithEventIdentifier:uniqueIdentifier:title:;
+ (BOOL)supportsSecureCoding;
@end
