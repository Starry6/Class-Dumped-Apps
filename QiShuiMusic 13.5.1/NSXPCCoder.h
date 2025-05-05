@interface NSXPCCoder : NSCoder
@property (nonatomic) <NSObject> userInfo;
@property (nonatomic) NSXPCConnection connection;
- (id)ar_decodePixelBufferForKey:;
- (void)ar_encodePixelBuffer:forKey:;
- (void)geo_encodeXPCInt64:forKey:;
- (void)geo_encodeXPCDouble:forKey:;
- (void)geo_encodeXPCData:forKey:;
- (void)geo_encodeXPCString:forKey:;
- (long long)geo_decodeXPCInt64ForKey:defaultValue:;
- (long long)geo_decodeXPCInt64ForKey:success:;
- (double)geo_decodeXPCDoubleForKey:defaultValue:;
- (double)geo_decodeXPCDoubleForKey:success:;
- (id)geo_decodeXPCDataForKey:;
- (id)geo_decodeXPCStringForKey:;
- (BOOL)ef_isNSXPCCoder;
- (id)init;
- (void)dealloc;
- (BOOL)requiresSecureCoding;
- (id)userInfo;
- (void)encodeXPCObject:forKey:;
- (id)decodeXPCObjectForKey:;
- (id)decodeXPCObjectOfType:forKey:;
- (void)setUserInfo:;
- (id)connection;
+ (id)_testEncodeAndDecodeObject:allowedClasses:;
+ (id)_testEncodeAndDecodeObject:allowedClass:;
+ (id)_testEncodeAndDecodeInvocation:interface:;
@end
