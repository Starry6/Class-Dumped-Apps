@interface SFTableAlignmentSchema : NSObject
@property (nonatomic) NSArray tableColumnAlignment;
@property (nonatomic) NSDictionary metadata;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (id)metadata;
- (id)initWithCoder:;
- (id)jsonData;
- (void)setMetadata:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (void)setTableColumnAlignment:;
- (id)tableColumnAlignment;
+ (BOOL)supportsSecureCoding;
@end
