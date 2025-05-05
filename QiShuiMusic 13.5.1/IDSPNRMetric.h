@interface IDSPNRMetric : NSObject
@property (nonatomic) q pnrReason;
@property (nonatomic) q mechanism;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)name;
- (id)dictionaryRepresentation;
- (long long)mechanism;
- (void)setMechanism:;
- (id)initWithPNRReason:mechanism:;
- (long long)pnrReason;
- (void)setPnrReason:;
@end
