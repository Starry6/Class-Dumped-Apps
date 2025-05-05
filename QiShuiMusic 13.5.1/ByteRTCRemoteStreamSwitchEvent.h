@interface ByteRTCRemoteStreamSwitchEvent : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) BOOL isScreen;
@property (nonatomic) q beforeVideoIndex;
@property (nonatomic) q afterVideoIndex;
@property (nonatomic) BOOL beforeVideoEnabled;
@property (nonatomic) BOOL afterVideoEnabled;
@property (nonatomic) q reason;
- (BOOL)isScreen;
- (void)setIsScreen:;
- (long long)beforeVideoIndex;
- (void)setBeforeVideoIndex:;
- (long long)afterVideoIndex;
- (void)setAfterVideoIndex:;
- (BOOL)beforeVideoEnabled;
- (void)setBeforeVideoEnabled:;
- (BOOL)afterVideoEnabled;
- (void)setAfterVideoEnabled:;
- (id)uid;
- (void)setUid:;
- (long long)reason;
- (void)setReason:;
- (void).cxx_destruct;
@end
