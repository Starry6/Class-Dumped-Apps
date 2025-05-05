@interface AWEIMOnlineContactAvatarListTracker : NSObject
@property (nonatomic) NSMutableDictionary trackDataDict;
@property (nonatomic) NSString requestID;
- (void)setTrackDataDict:;
- (void)trackCellShowWithFriendModel:;
- (void)trackCellShowWithPromotModel:;
- (id)trackDataDict;
- (id)requestID;
- (void).cxx_destruct;
- (void)reset;
- (void)setRequestID:;
@end
