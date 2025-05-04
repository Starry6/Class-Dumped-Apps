@interface AWEIMWatchOnceDataManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchWatchOnceShowInfo:complete:;
- (void)markMessageWatchOnceAlreadyConsume:messageArray:complete:;
- (void)fetchWatchOnceVideoDetailInfo:complete:;
- (void)fetchWatchOnceTextReadInfo:complete:;
+ (void)fetchWatchOnceImageDetailInfo:complete:;
+ (id)sharedInstance;
@end
