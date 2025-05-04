@interface AWEProfileMethodManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)shouldShowBrowsingHistory;
+ (id)commonComponentWithUser:;
+ (id)watchHistoryUrlWithEnterFrom:;
+ (void)openPraisePageWithUser:;
+ (void)openRelationListPageWithUser:isFromHome:type:enterFrom:;
+ (void)openWatchHistoryPageWithEnterFrom:;
@end
