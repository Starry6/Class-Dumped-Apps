@interface MBDeviceTransferSession : NSObject
@property (nonatomic) RPFileTransferSession fileTransferSession;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setFileTransferSession:;
- (id)fileTransferSession;
+ (BOOL)supportsSecureCoding;
@end
