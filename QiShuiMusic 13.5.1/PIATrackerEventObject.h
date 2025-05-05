@interface PIATrackerEventObject : NSObject
@property (nonatomic) PIABiMapTable categories;
@property (nonatomic) PIABiMapTable metrics;
- (void)setCategories:;
- (id)init;
- (void)setMetrics:;
- (id)metrics;
- (void).cxx_destruct;
- (id)categories;
@end
