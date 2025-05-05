@interface CWFAutoJoinRequest : NSObject
@property (nonatomic) NSUUID UUID;
@property (nonatomic) CWFAutoJoinParameters parameters;
@property (nonatomic) BOOL allowAutoHotspotFallback;
@property (nonatomic) NSDate addedAt;
@property (nonatomic) @? reply;
- (id)reply;
- (void)setAllowAutoHotspotFallback:;
- (void)setUUID:;
- (void)setReply:;
- (id)addedAt;
- (id)parameters;
- (void)setAddedAt:;
- (void).cxx_destruct;
- (id)description;
- (void)setParameters:;
- (id)UUID;
- (BOOL)allowAutoHotspotFallback;
- (id)copyWithZone:;
@end
