@interface CTCellularData : NSObject
@property (nonatomic) @? cellularDataRestrictionDidUpdateNotifier;
@property (nonatomic) Q restrictedState;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setCellularDataRestrictionStateFromPolicies:;
- (unsigned long long)restrictedState;
- (id)cellularDataRestrictionDidUpdateNotifier;
- (void)setCellularDataRestrictionDidUpdateNotifier:;
@end
