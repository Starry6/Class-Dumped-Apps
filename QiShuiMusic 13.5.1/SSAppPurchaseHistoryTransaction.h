@interface SSAppPurchaseHistoryTransaction : NSObject
@property (nonatomic) SSSQLiteDatabase database;
- (id)initWithDatabase:;
- (void)dealloc;
- (id)database;
@end
