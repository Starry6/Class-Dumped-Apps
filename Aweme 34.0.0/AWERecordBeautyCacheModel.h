@interface AWERecordBeautyCacheModel : NSObject
@property (nonatomic) BOOL isBeautyTurnedOff;
@property (nonatomic) NSMutableArray appliedItems;
@property (nonatomic) NSDictionary items;
- (id)appliedItems;
- (void)setAppliedItems:;
- (BOOL)isBeautyTurnedOff;
- (void)setIsBeautyTurnedOff:;
- (id)itemsWithResourceIdAsKey;
- (id)init;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (id)toDict;
+ (id)generateCacheModelFromDictionary:;
@end
