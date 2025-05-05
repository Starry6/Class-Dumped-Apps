@interface STWifiStatusDomainDataDiff : NSObject
@property (nonatomic) BOOL empty;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)isEmpty;
- (id)diffByApplyingDiff:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)dataByApplyingToData:;
- (void)encodeWithCoder:;
- (void)applyToMutableData:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)diffFromData:toData:;
@end
