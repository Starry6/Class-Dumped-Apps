@interface AWEIMFTSChatModel : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) NSString name;
@property (nonatomic) q timestamp;
- (long long)timestamp;
- (void)setUid:;
- (id)uid;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)initWithCoder:;
@end
