@interface AWENoticeInappPushSectionManager : NSObject
@property (nonatomic) NSString inAppPushType;
@property (nonatomic) NSMutableArray polymericMessagesFromLongConnection;
@property (nonatomic) NSMutableArray polymericMessagesForDeactivePeriod;
- (void)clearDeactivePeriod;
- (id)inAppPushType;
- (id)polymericMessagesForDeactivePeriod;
- (id)polymericMessagesFromLongConnection;
- (void)setInAppPushType:;
- (void)setPolymericMessagesForDeactivePeriod:;
- (void)setPolymericMessagesFromLongConnection:;
- (id)viewModel;
- (void)clear;
- (void).cxx_destruct;
- (BOOL)hasNotice;
+ (id)managerWithInappPushType:;
@end
