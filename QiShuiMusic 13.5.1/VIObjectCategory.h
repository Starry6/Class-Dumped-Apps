@interface VIObjectCategory : NSObject
@property (nonatomic) NSString knowledgeGraphID;
@property (nonatomic) NSString labelDebugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)knowledgeGraphID;
- (id)initWithKnowledgeGraphID:labelDebugDescription:;
- (id)labelDebugDescription;
+ (BOOL)supportsSecureCoding;
@end
