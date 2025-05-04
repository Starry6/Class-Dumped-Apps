@interface AWENewHotSpotSearchFeedLoadManager : NSObject
@property (nonatomic) NSMutableDictionary loadHandlerTable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLoadHandlerTable:;
- (id)loadHandlerTable;
- (void)removeLoadHandlerForSearchID:;
- (id)loadHandlerForSearchID:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
