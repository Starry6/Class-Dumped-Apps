@interface IESECDetailBuyerShowFeature : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getWaterfallVCWithProductID:headerTitle:tracker:trackParams:;
- (id)init;
- (void)dealloc;
+ (id)shared;
@end
