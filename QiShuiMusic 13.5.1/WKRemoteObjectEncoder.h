@interface WKRemoteObjectEncoder : NSCoder
- (void)encodeBytes:length:forKey:;
- (void)encodeInt32:forKey:;
- (void)encodeDouble:forKey:;
- (void)encodeFloat:forKey:;
- (void)encodeObject:forKey:;
- (void)encodeBool:forKey:;
- (void)encodeValueOfObjCType:at:;
- (void)encodeInt:forKey:;
- (void)encodeInteger:forKey:;
- (id)init;
- (BOOL)requiresSecureCoding;
- (BOOL)allowsKeyedCoding;
- (void)encodeInt64:forKey:;
- (void).cxx_destruct;
- (id)rootObjectDictionary;
- (id).cxx_construct;
@end
