@interface PLUUIDString : NSString
- (id)initWithUUID:;
- (id)init;
- (unsigned short)characterAtIndex:;
- (void)getCharacters:range:;
- (id)initWithCFUUIDBytes:;
- (id)UUIDBytes;
- (long long)compare:options:range:locale:;
- (id)UUIDData;
- (id)initWithCFUUID:;
- (id)UTF8String;
- (id)initWithUUIDData:;
- (unsigned long long)length;
- (BOOL)isEqualToString:;
+ (BOOL)parseUUIDString:uuidBuffer:;
+ (id)UUIDString;
@end
