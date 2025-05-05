@interface VIObjectKnowledgeProperty : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString value;
- (id)initWithName:value:;
- (void).cxx_destruct;
- (id)value;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
