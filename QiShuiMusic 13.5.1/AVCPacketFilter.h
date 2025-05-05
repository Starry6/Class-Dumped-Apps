@interface AVCPacketFilter : NSObject
@property (nonatomic) BOOL isRTPFilter;
- (BOOL)isMatchedPacket:size:;
- (BOOL)isRTPFilter;
@end
