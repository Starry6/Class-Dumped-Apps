@interface IESECWinOrderObject : NSObject
@property (nonatomic) IESECWinLivingOrderModel orderModel;
@property (nonatomic) IESECTracker tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)diffIdentifier;
- (id)edgeForObject;
- (BOOL)isEqualToDiffableObject:;
- (id)orderModel;
- (void)setOrderModel:;
- (void)setTracker:;
- (id)tracker;
- (void).cxx_destruct;
@end
