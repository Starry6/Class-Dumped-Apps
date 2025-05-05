@interface FPTestingContentFetch : FPTestingOperation
@property (nonatomic) Q side;
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)itemIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (unsigned long long)side;
- (id)asContentFetch;
- (id)initWithOperationIdentifier:itemIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
