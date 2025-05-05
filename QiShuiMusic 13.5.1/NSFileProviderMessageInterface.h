@interface NSFileProviderMessageInterface : NSObject
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) NSString providerIdentifier;
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) NSString providerIdentifier;
@property (nonatomic) NSString name;
- (void)setItemIdentifier:;
- (id)itemIdentifier;
- (id)providerIdentifier;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setProviderIdentifier:;
- (id)name;
- (id)initWithName:itemIdentifier:providerIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
