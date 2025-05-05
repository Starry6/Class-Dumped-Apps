@interface AKAuthorizationNameFormatter : NSFormatter
- (id)stringForObjectValue:;
- (BOOL)getObjectValue:forString:errorDescription:;
- (BOOL)isPartialStringValid:proposedSelectedRange:originalString:originalSelectedRange:errorDescription:;
- (BOOL)_isOnlyWhitespace:;
- (id)_cleanNameString:;
+ (id)validNameCharacterSet;
+ (void)_addSymbolModifiersToCharacterSet:;
@end
