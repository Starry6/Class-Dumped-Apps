@interface CNEncodedFetchResponse : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSDictionary matchInfo;
@property (nonatomic) NSSet identifierAccountingData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)data;
- (void)setMatchInfo:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)identifierAccountingData;
- (void).cxx_destruct;
- (void)setIdentifierAccountingData:;
- (id)matchInfo;
- (void)setData:;
+ (BOOL)supportsSecureCoding;
+ (id)emptyResponse;
@end
