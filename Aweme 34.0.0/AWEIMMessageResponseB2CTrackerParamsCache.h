@interface AWEIMMessageResponseB2CTrackerParamsCache : NSObject
@property (nonatomic) @? block;
@property (nonatomic) NSMutableDictionary params;
- (void)addTrackBlock:;
- (void)setParams:messageID:conversationID:;
- (id)paramsForMessageID:conversationID:;
- (id)prepareParamsForMessageID:conversationID:;
- (id)messageExtParamsForMessageID:conversationID:;
- (id)block;
- (void)setBlock:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)sharedInstance;
@end
