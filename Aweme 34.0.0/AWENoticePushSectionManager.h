@interface AWENoticePushSectionManager : NSObject
@property (nonatomic) NSString inAppPushType;
@property (nonatomic) NSMutableArray polymericMessagesFromLongConnection;
@property (nonatomic) NSMutableArray polymericMessagesForDeactivePeriod;
- (id)polymericMessagesForDeactivePeriod;
- (void)setPolymericMessagesForDeactivePeriod:;
- (id)polymericMessagesFromLongConnection;
- (void)setPolymericMessagesFromLongConnection:;
- (void)setInAppPushType:;
- (id)inAppPushType;
- (void)clearDeactivePeriod;
- (id)viewModel;
- (void)clear;
- (void).cxx_destruct;
- (BOOL)hasNotice;
+ (id)managerWithInappPushType:;
@end
