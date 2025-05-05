@interface FPTestingIngestion : FPTestingOperation
@property (nonatomic) Q side;
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) <NSFileProviderItem> item;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)itemIdentifier;
- (id)item;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (unsigned long long)side;
- (id)asIngestion;
- (id)initWithOperationIdentifier:itemIdentifier:item:;
+ (BOOL)supportsSecureCoding;
@end
