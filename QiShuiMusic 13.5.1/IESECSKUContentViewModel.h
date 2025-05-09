@interface IESECSKUContentViewModel : NSObject
@property (nonatomic) NSArray sectionObjectsArray;
@property (nonatomic) IESECSKUModel skuModel;
@property (nonatomic) IESECSKUDetailContext detailContext;
@property (nonatomic) IESECSKUCouponViewModel couponViewModel;
@property (nonatomic) IESECSKUCarAdaptViewModel carAdaptViewModel;
@property (nonatomic) BOOL isScrollToBottom;
@property (nonatomic) NSNumber termCount;
@property (nonatomic) BOOL isSKUOptimize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)couponViewModel;
- (id)initWithSKUModel:detailContext:;
- (id)carAdaptViewModel;
- (id)detailContext;
- (BOOL)isSKUOptimize;
- (BOOL)isScrollToBottom;
- (id)sectionObjectsArray;
- (void)setCarAdaptViewModel:;
- (void)setCouponViewModel:;
- (void)setDetailContext:;
- (void)setIsScrollToBottom:;
- (void)setSectionObjectsArray:;
- (void)setSkuModel:;
- (void)setTermCount:;
- (id)skuModel;
- (void).cxx_destruct;
- (id)termCount;
@end
