@interface SFInfoTuple : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSArray values;
@property (nonatomic) Q initiallyVisibleValues;
@property (nonatomic) NSString showMoreString;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (id)values;
- (id)key;
- (id)initWithCoder:;
- (id)jsonData;
- (void)setKey:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setValues:;
- (id)copyWithZone:;
- (unsigned long long)initiallyVisibleValues;
- (void)setInitiallyVisibleValues:;
- (id)showMoreString;
- (void)setShowMoreString:;
- (BOOL)hasInitiallyVisibleValues;
+ (BOOL)supportsSecureCoding;
@end
