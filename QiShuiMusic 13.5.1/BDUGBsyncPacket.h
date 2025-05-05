@interface BDUGBsyncPacket : GPBMessage
@property (nonatomic) BDUGBsyncCursor cursor;
@property (nonatomic) BOOL hasCursor;
@property (nonatomic) BDUGBsyncPayload payload;
@property (nonatomic) BOOL hasPayload;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) q ts;
@property (nonatomic) BOOL hasTs;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
- (id)payload;
+ (id)descriptor;
@end
