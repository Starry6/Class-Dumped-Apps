@interface AVCRTCPSourceDescription : AVCRTCPPacket
@property (nonatomic) C type;
@property (nonatomic) NSString text;
- (void)dealloc;
- (void)setText:;
- (void)setType:;
- (unsigned char)type;
- (id)description;
- (id)text;
- (id)initWithRTCPPacket:;
@end
