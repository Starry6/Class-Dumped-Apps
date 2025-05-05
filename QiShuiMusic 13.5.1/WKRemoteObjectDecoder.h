@interface WKRemoteObjectDecoder : NSCoder
- (id)decodeObjectOfClasses:forKey:;
- (BOOL)decodeBoolForKey:;
- (double)decodeDoubleForKey:;
- (BOOL)requiresSecureCoding;
- (int)decodeInt32ForKey:;
- (long long)decodeInt64ForKey:;
- (float)decodeFloatForKey:;
- (int)decodeIntForKey:;
- (long long)decodeIntegerForKey:;
- (id)decodeObjectForKey:;
- (BOOL)allowsKeyedCoding;
- (id)initWithInterface:rootObjectDictionary:replyToSelector:;
- (void).cxx_destruct;
- (void)decodeValueOfObjCType:at:;
- (BOOL)containsValueForKey:;
- (id)decodeBytesForKey:returnedLength:;
- (id)allowedClasses;
- (id).cxx_construct;
@end
