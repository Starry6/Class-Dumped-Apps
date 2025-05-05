@interface IDSGFTMetricsReferencePoint : NSObject
@property (nonatomic) NSString fromType;
@property (nonatomic) @ fromUniqueID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFromType:fromUniqueID:anonymizer:template:;
- (id)collectForTimeBase:anonymize:;
- (double)referenceTimeForTimeBase:;
- (id)instanceForID:;
- (void)event:;
- (void)event:time:;
- (void)event:uniqueID:;
- (void)event:uniqueID:time:;
- (void)event:uniqueID:reason:;
- (void)event:uniqueID:reason:time:;
- (id)fromType;
- (void)setFromType:;
- (id)fromUniqueID;
- (void)setFromUniqueID:;
@end
