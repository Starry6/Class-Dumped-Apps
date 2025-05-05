@interface CADSequenceToken : NSObject
@property (nonatomic) NSDictionary allDBSequenceMap;
- (int)mainDBSequence;
- (id)initWithAllDBSequenceMap:;
- (id)initWithCoder:;
- (id)allDBSequenceMap;
- (void)encodeWithCoder:;
- (id)serializedSequenceString;
- (id)initWithMainDBSequence:;
- (id)initWithSerializedSequenceString:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (int)sequenceForDatabaseID:;
+ (BOOL)supportsSecureCoding;
@end
