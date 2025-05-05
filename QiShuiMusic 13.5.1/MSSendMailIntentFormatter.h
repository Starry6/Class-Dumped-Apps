@interface MSSendMailIntentFormatter : NSFormatter
- (id)stringForObjectValue:;
- (BOOL)getObjectValue:forString:errorDescription:;
- (BOOL)allowsReverseTransformation;
- (id)_stringForAddresses:;
@end
