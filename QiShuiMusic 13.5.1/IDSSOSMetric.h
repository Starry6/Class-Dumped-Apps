@interface IDSSOSMetric : NSObject
@property (nonatomic) Q sosDomain;
@property (nonatomic) Q sosType;
@property (nonatomic) q sosError;
@property (nonatomic) NSString operationID;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)operationID;
- (void).cxx_destruct;
- (id)name;
- (void)setOperationID:;
- (unsigned long long)sosDomain;
- (unsigned long long)sosType;
- (long long)sosError;
- (id)initWithDomain:type:error:bagURL:;
- (void)setSosDomain:;
- (void)setSosType:;
- (void)setSosError:;
+ (id)metricWithDomain:type:error:bagURL:;
@end
