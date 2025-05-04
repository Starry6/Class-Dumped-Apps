@interface AWEPineappleLuckyIMService : NSObject
@property (nonatomic) NSMutableDictionary linksMap;
@property (nonatomic) NSMutableDictionary linksMap2;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)connectWithRoomID:identifier:;
- (BOOL)disconnectWithRoomID:identifier:;
- (void)disconnectWithIdentifier:;
- (id)linksMap;
- (void)connect:identifier:;
- (id)linksMap2;
- (void)notifyMessageReceived:;
- (void)setLinksMap:;
- (void)setLinksMap2:;
- (id)init;
- (void).cxx_destruct;
- (void)messageReceived:;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
