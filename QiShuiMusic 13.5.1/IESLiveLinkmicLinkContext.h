@interface IESLiveLinkmicLinkContext : NSObject
@property (nonatomic) NSObject rawData;
@property (nonatomic) NSObject extraData;
@property (nonatomic) Q vendor;
@property (nonatomic) NSNumber channelID;
@property (nonatomic) NSString linkmicID;
@property (nonatomic) NSString promptString;
@property (nonatomic) NSString linkerSessionId;
@property (nonatomic) NSString remoteLinkerSessionId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)linkerSessionId;
- (id)linkmicID;
- (id)remoteLinkerSessionId;
- (void)setChannelID:;
- (void).cxx_destruct;
- (id)rawData;
- (unsigned long long)vendor;
- (id)channelID;
- (id)extraData;
- (id)promptString;
@end
