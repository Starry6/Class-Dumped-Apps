@interface CoreDAVLeafDataPayload : NSObject
@property (nonatomic) NSURL serverID;
@property (nonatomic) NSData dataPayload;
@property (nonatomic) NSString syncKey;
@property (nonatomic) NSArray childrenOrder;
@property (nonatomic) NSURL sourceURL;
@property (nonatomic) NSURL destinationURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)serverID;
- (void)setServerID:;
- (id)syncKey;
- (id)dataPayload;
- (id)initWithURL:eTag:dataPayload:inContainerWithURL:withAccountInfoProvider:;
@end
