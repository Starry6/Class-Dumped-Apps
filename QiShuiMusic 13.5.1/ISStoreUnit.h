@interface ISStoreUnit : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSUUID UUID;
- (id)data;
- (id)initWithData:UUID:;
- (void)remapWithStoreURL:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)UUID;
+ (id)storeUnitWithStoreURL:UUID:;
+ (id)storeUnitWithData:;
@end
