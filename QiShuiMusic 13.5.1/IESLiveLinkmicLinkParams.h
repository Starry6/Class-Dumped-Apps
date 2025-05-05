@interface IESLiveLinkmicLinkParams : NSObject
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSNumber channelID;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtraParams:;
- (id)extraParams;
- (id)secUserID;
- (void)setSecUserID:;
- (void)setChannelID:;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
- (id)channelID;
- (id)roomID;
- (void)setRoomID:;
@end
