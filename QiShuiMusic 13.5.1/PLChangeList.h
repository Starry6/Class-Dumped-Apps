@interface PLChangeList : NSObject
@property (nonatomic) NSMutableSet inserted;
@property (nonatomic) NSMutableSet updated;
@property (nonatomic) NSMutableSet deleted;
- (id)deleted;
- (id)updated;
- (void)setUpdated:;
- (void)setInserted:;
- (id)inserted;
- (void).cxx_destruct;
- (void)setDeleted:;
- (void)cleanupState;
@end
