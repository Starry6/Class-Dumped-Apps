@interface APEdgeSync : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initSyncService;
- (void)handleWithBizType:andData:;
+ (id)sharedInstance;
@end
