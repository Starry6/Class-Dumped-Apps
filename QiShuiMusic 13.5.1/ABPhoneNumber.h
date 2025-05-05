@interface ABPhoneNumber : NSObject
@property (nonatomic) ^{?=***I*I*I} decomposedPhoneNumberPointer;
@property (nonatomic) NSString lastFour;
@property (nonatomic) NSString originalStringValue;
@property (nonatomic) * normalizedPhoneChars;
- (void)dealloc;
- (id)initWithPhoneNumberString:countryCode:;
- (id)decomposedPhoneNumberPointer;
- (char *)normalizedPhoneChars;
- (id)lastFour;
- (id)originalStringValue;
@end
