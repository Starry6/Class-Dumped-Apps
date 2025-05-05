@interface NEIKEv2PrivateNotify : NSObject
@property (nonatomic) S notifyStatus;
@property (nonatomic) NSData notifyData;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithNotifyStatus:notifyData:;
- (unsigned short)notifyStatus;
- (id)notifyData;
@end
