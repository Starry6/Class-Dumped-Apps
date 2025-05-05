@interface WK_RTCDefaultVideoEncoderFactory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)supportedCodecs;
- (id)createEncoder:;
- (id)initWithH265:vp9Profile0:vp9Profile2:lowLatencyH264:;
+ (id)supportedCodecs;
+ (id)supportedCodecsWithH265:vp9Profile0:vp9Profile2:;
@end
