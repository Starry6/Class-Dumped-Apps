@interface TKSmartCardSlotScreen : NSObject
@property (nonatomic) q physicalColumnCount;
@property (nonatomic) q physicalRowCount;
@property (nonatomic) q virtualColumnCount;
@property (nonatomic) q virtualRowCount;
- (BOOL)displayMessage:x:y:duration:clearScreen:;
- (long long)physicalColumnCount;
- (void)setPhysicalColumnCount:;
- (long long)physicalRowCount;
- (void)setPhysicalRowCount:;
- (long long)virtualColumnCount;
- (void)setVirtualColumnCount:;
- (long long)virtualRowCount;
- (void)setVirtualRowCount:;
@end
