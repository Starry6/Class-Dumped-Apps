@interface IESLiveIntimateChatStreamLayout : NSObject
@property (nonatomic) BOOL seiFieldsSimplifiedUid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)seiFieldsSimplifiedUid;
- (void)setSeiFieldsSimplifiedUid:;
- (id)streamRegionByLayoutRegion:;
- (void)updateLayoutOfPublisher:withSessions:withUserService:mediaConfig:;
- (id)init;
@end
