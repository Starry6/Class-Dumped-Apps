@interface IESLiveInteractViewTable : NSObject
@property (nonatomic) NSMutableDictionary viewTable;
- (void)enumerated:for:;
- (void)insert:for:;
- (void)remove:for:;
- (void)setViewTable:;
- (id)viewTable;
- (id)init;
- (void).cxx_destruct;
- (BOOL)contains:;
@end
