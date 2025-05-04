@interface AWEPOIEntryViewReusePool : NSObject
@property (nonatomic) NSMutableArray separatorLinePool;
@property (nonatomic) NSMutableArray normalLabelPool;
@property (nonatomic) NSMutableArray grayLabelPool;
@property (nonatomic) NSMutableArray iconImagePool;
@property (nonatomic) NSMutableArray localIconImagePool;
@property (nonatomic) NSMutableArray usedPool;
- (void)resetUsedPool;
- (id)dequeueReusableViewForEntryView:;
- (id)reusePoolWithStyle:;
- (id)creatReuseableViewWithStyle:;
- (id)usedPool;
- (id)grayLabelPool;
- (id)separatorLinePool;
- (id)normalLabelPool;
- (id)iconImagePool;
- (id)localIconImagePool;
- (void)setSeparatorLinePool:;
- (void)setNormalLabelPool:;
- (void)setGrayLabelPool:;
- (void)setIconImagePool:;
- (void)setLocalIconImagePool:;
- (void)setUsedPool:;
- (id)init;
- (void).cxx_destruct;
@end
