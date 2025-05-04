@interface AWENearbyLifeDualAnchorInfo : AWEBaseApiModel
@property (nonatomic) NSArray items;
@property (nonatomic) NSString background;
@property (nonatomic) q backgroundRound;
- (long long)backgroundRound;
- (void)setBackgroundRound:;
- (id)items;
- (void)setItems:;
- (id)background;
- (void)setBackground:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
+ (id)itemsJSONTransformer;
@end
