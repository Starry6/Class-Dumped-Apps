@interface RVQuery : NSObject
@property (nonatomic) @? queryProvider;
@property (nonatomic) NSString title;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString userAgent;
@property (nonatomic) q queryID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)queryID;
- (id)userAgent;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)queryProvider;
- (id)initWithTitle:clientIdentifier:userAgent:queryID:queryProvider:;
+ (BOOL)supportsSecureCoding;
@end
