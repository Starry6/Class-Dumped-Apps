@interface IESECTabUpdateContext : NSObject
@property (nonatomic) BOOL isBatchUpdating;
@property (nonatomic) <IESECTabViewElementProtocol> selectedTabViewElement;
- (id)selectedTabViewElement;
- (void)setIsBatchUpdating:;
- (void)setSelectedTabViewElement:;
- (void).cxx_destruct;
- (BOOL)isBatchUpdating;
@end
