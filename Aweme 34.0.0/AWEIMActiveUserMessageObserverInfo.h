@interface AWEIMActiveUserMessageObserverInfo : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) double timestamp;
- (id)secUid;
- (void)setSecUid:;
- (double)timestamp;
- (void)setUid:;
- (id)uid;
- (void)setTimestamp:;
- (void).cxx_destruct;
@end
