@interface BMPostSiriEngagementEventSignal : BMEventBase
@property (nonatomic) NSString domain;
@property (nonatomic) NSString action;
@property (nonatomic) BOOL hasIsPostSiriEngagement;
@property (nonatomic) BOOL isPostSiriEngagement;
@property (nonatomic) BMPostSiriEngagementEventSignalDeltaEvent pseDelta;
@property (nonatomic) NSArray pseContents;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)writeTo:;
- (id)action;
- (unsigned int)dataVersion;
- (id)initByReadFrom:;
- (void).cxx_destruct;
- (id)description;
- (id)serialize;
- (id)domain;
- (BOOL)isEqual:;
- (id)initWithDomain:action:isPostSiriEngagement:pseDelta:pseContentsDictionary:;
- (id)initWithDomain:action:isPostSiriEngagement:pseDelta:pseContents:;
- (BOOL)hasIsPostSiriEngagement;
- (void)setHasIsPostSiriEngagement:;
- (BOOL)isPostSiriEngagement;
- (id)pseDelta;
- (id)pseContents;
+ (id)eventWithData:dataVersion:;
@end
