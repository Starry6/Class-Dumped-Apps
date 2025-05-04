@interface AWEFoodTakeoutUpdateAnchorInfo : NSObject
@property (nonatomic) NSString storeID;
@property (nonatomic) NSString shopID;
@property (nonatomic) NSString subProductId;
@property (nonatomic) BOOL needAddress;
@property (nonatomic) BOOL isFallback;
- (void)setShopID:;
- (id)shopID;
- (id)subProductId;
- (void)setSubProductId:;
- (BOOL)needAddress;
- (void)setNeedAddress:;
- (id)storeID;
- (void)setStoreID:;
- (void).cxx_destruct;
- (BOOL)isFallback;
- (void)setIsFallback:;
@end
