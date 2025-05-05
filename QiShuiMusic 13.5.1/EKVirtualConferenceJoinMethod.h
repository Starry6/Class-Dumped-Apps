@interface EKVirtualConferenceJoinMethod : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSURL URL;
@property (nonatomic) BOOL isBroadcast;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)setURL:;
- (id)URL;
- (id)copyWithZone:;
- (BOOL)isBroadcast;
- (id)initWithTitle:url:;
- (void)setIsBroadcast:;
@end
