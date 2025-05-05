@interface IESLiveSaaSActivityFeedSchemaParser : NSObject
@property (nonatomic) IESLiveSaaSFeedDataApi feedApi;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feedApi;
- (void)enterLiveFeedRooms:enterMethod:extra:;
- (void)p_handleActionsAfterEnterRoomWithParams:;
- (void)parseWithParams:fromInside:completion:;
- (void)setFeedApi:;
- (void)trackFeedLoadDurationWithStartTime:room:;
- (void).cxx_destruct;
- (id)_topViewController;
+ (void)ieslivekit_register_schema;
@end
