@interface AWEIMCoreInjectService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appendMsgSceneParamWithCid:params:event:;
- (id)appendGroupFlagData:iescon:;
- (id)serviceChatTrackersWithToUser:conversationID:;
- (double)updateDateHighPerformance:;
- (double)updateDate:;
- (id)notUserGeneratedMessageTypes;
+ (id)sharedInstance;
@end
