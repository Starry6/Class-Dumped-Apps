@interface STActivityAttributionListDiff : NSObject
@property (nonatomic) BOOL empty;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)isEmpty;
- (id)diffByApplyingDiff:;
- (id)listByApplyingToList:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)applyToMutableList:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)diffFromList:toList:;
@end
