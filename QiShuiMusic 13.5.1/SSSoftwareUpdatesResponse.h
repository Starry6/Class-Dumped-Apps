@interface SSSoftwareUpdatesResponse : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) BOOL failed;
@property (nonatomic) NSArray updateItems;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)initWithError:;
- (id)copyXPCEncoding;
- (id)error;
- (id)description;
- (id)updateItems;
- (BOOL)isFailed;
- (id)copyUpdateItemDictionaries;
- (void)setUpdateItemsWithItemDictionaries:;
@end
