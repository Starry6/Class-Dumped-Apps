@interface NSPlaceholderMutableString : NSMutableString
- (void)HMDP_replaceCharactersInRange:withString:;
- (unsigned short)HMDP_characterAtIndex:;
- (void)replaceCharactersInRange:withString:;
- (id)init;
- (void)dealloc;
- (id)initWithBytesNoCopy:length:encoding:freeWhenDone:;
- (id)initWithBytesNoCopy:length:encoding:deallocator:;
- (id)initWithFormat:locale:arguments:;
- (unsigned short)characterAtIndex:;
- (id)initWithString:;
- (id)initWithCString:encoding:;
- (BOOL)_isDeallocating;
- (id)initWithBytes:length:encoding:;
- (id)initWithUTF8String:;
- (id)_initWithFormat:locale:options:arguments:;
- (id)autorelease;
- (id)initWithCharactersNoCopy:length:deallocator:;
- (id)release;
- (id)initWithValidatedFormat:validFormatSpecifiers:locale:arguments:error:;
- (id)retain;
- (BOOL)_tryRetain;
- (id)initWithCStringNoCopy:length:freeWhenDone:;
- (unsigned long long)length;
- (unsigned long long)retainCount;
- (id)_initWithValidatedFormat:validFormatSpecifiers:locale:options:error:arguments:;
- (id)initWithCapacity:;
- (id)initWithCharactersNoCopy:length:freeWhenDone:;
@end
