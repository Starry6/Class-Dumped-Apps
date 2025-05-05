@interface STActivityAttributionCatalogDiff : NSObject
@property (nonatomic) BOOL empty;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)isEmpty;
- (id)diffByApplyingDiff:;
- (id)initWithAttributionListDiffsByKey:;
- (id)catalogByApplyingToCatalog:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)applyToMutableCatalog:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)diffFromCatalog:toCatalog:;
+ (BOOL)supportsSecureCoding;
@end
