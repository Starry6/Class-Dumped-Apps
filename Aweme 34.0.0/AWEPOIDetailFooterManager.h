@interface AWEPOIDetailFooterManager : NSObject
@property (nonatomic) NSMutableArray cardList;
@property (nonatomic) AWEPOIDetailNGPageContext context;
@property (nonatomic) NSString currentShowCardKey;
@property (nonatomic) NSArray registeredCardList;
- (id)cardList;
- (void)setCardList:;
- (void)registerFooterCard:priority:;
- (void)unRegisterFooterCard:;
- (id)currentShowCardKey;
- (id)registeredCardList;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)sendNotification;
@end
