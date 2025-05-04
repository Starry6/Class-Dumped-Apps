@interface AWESearchMaskedSugModel : NSObject
@property (nonatomic) NSString imprID;
@property (nonatomic) NSMutableArray gids;
@property (nonatomic) NSMutableArray words;
- (id)imprID;
- (void)setImprID:;
- (id)gids;
- (void)setGids:;
- (id)init;
- (void).cxx_destruct;
- (void)setWords:;
- (id)words;
@end
