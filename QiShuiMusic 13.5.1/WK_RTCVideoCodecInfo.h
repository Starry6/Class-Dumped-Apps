@interface WK_RTCVideoCodecInfo : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary parameters;
- (id)initWithName:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)parameters;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:;
- (id)initWithName:parameters:;
- (id)initWithNativeSdpVideoFormat:;
- (id)nativeSdpVideoFormat;
- (BOOL)isEqualToCodecInfo:;
@end
