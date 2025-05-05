@interface IESLivePKBlockListViewModel : NSObject
@property (nonatomic) HTSLivePKApi pkAPI;
@property (nonatomic) NSMutableArray blockList;
@property (nonatomic) NSString cursor;
- (id)pkAPI;
- (void)pkBlockListWithType:count:;
- (void)removeListItem:withType:successBlock:;
- (void)setPkAPI:;
- (id)cursor;
- (id)init;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setBlockList:;
- (id)blockList;
@end
