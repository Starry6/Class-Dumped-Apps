@interface SFMoreResults : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (void)setLabel:;
- (id)initWithCoder:;
- (id)jsonData;
- (id)label;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (void)loadSearchResultsWithCompletionAndErrorHandler:;
- (void)loadSearchResultsWithCompletionHandler:;
+ (BOOL)supportsSecureCoding;
@end
