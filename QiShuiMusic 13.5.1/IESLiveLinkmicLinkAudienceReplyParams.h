@interface IESLiveLinkmicLinkAudienceReplyParams : IESLiveLinkmicLinkAudienceParams
@property (nonatomic) q mode;
@property (nonatomic) Q replyType;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSNumber channelID;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)mode;
- (void)setMode:;
- (unsigned long long)replyType;
- (void)setReplyType:;
@end
