@interface TVLPacket : NSObject
@property (nonatomic) q streamType;
@property (nonatomic) q DTS;
@property (nonatomic) q PTS;
@property (nonatomic) NSDictionary info;
@property (nonatomic) BOOL containsKeyframe;
- (long long)DTS;
- (long long)PTS;
- (void)setDTS:;
- (void)setPTS:;
- (BOOL)containsKeyframe;
- (id)streamTypeDescription;
- (id)init;
- (void)setInfo:;
- (void).cxx_destruct;
- (id)description;
- (id)info;
- (long long)streamType;
- (void)setStreamType:;
+ (id)packetWithInfo:error:;
@end
