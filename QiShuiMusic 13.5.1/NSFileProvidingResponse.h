@interface NSFileProvidingResponse : NSObject
@property (nonatomic) NSString sandboxToken;
@property (nonatomic) Q providedItemRecursiveGenerationCount;
@property (nonatomic) NSError error;
- (id)sandboxToken;
- (void)dealloc;
- (void)setError:;
- (id)error;
- (id)initWithCoder:;
- (unsigned long long)providedItemRecursiveGenerationCount;
- (void)encodeWithCoder:;
- (void)setProvidedItemRecursiveGenerationCount:;
- (void)setSandboxToken:;
+ (BOOL)supportsSecureCoding;
+ (id)responseWithError:;
@end
