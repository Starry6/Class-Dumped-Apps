@interface SAMPGetStateResponse : SABaseCommand
@property (nonatomic) NSString hashedGroupID;
@property (nonatomic) SAMPMediaItem listeningToItem;
@property (nonatomic) NSNumber listeningToMusicApplication;
@property (nonatomic) NSString source;
@property (nonatomic) NSInteger state;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setState:;
- (BOOL)requiresResponse;
- (int)state;
- (id)encodedClassName;
- (id)source;
- (void)setSource:;
- (id)listeningToItem;
- (void)setListeningToItem:;
- (id)hashedGroupID;
- (void)setHashedGroupID:;
- (id)listeningToMusicApplication;
- (void)setListeningToMusicApplication:;
+ (id)getStateResponse;
+ (id)getStateResponseWithDictionary:context:;
@end
