@interface WK_RTCCodecSpecificInfoH265 : NSObject
@property (nonatomic) Q packetizationMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)packetizationMode;
- (id)nativeCodecSpecificInfo;
- (void)setPacketizationMode:;
@end
