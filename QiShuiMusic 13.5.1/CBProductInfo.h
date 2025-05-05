@interface CBProductInfo : NSObject
@property (nonatomic) I flags;
@property (nonatomic) NSString model;
@property (nonatomic) I productID;
@property (nonatomic) I radarComponentID;
@property (nonatomic) NSString sfSymbolNameCase;
@property (nonatomic) NSString sfSymbolNameMain;
@property (nonatomic) S vendorIDBluetooth;
@property (nonatomic) S vendorIDUSB;
- (unsigned int)productID;
- (id)model;
- (void).cxx_destruct;
- (unsigned int)flags;
- (unsigned int)radarComponentID;
- (id)initWithProductInfoPtr:;
- (id)sfSymbolNameCase;
- (id)sfSymbolNameMain;
- (unsigned short)vendorIDBluetooth;
- (unsigned short)vendorIDUSB;
+ (id)productInfoWithProductID:;
@end
