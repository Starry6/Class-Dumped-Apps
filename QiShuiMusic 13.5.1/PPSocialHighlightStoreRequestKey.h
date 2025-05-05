@interface PPSocialHighlightStoreRequestKey : NSObject
@property (nonatomic) Q limit;
@property (nonatomic) NSString client;
@property (nonatomic) NSString variant;
- (unsigned long long)limit;
- (id)init;
- (id)copyWithReplacementVariant:;
- (id)initWithLimit:client:variant:;
- (id)copyWithReplacementClient:;
- (unsigned long long)hash;
- (id)variant;
- (BOOL)isEqualToSocialHighlightStoreRequestKey:;
- (id)client;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithReplacementLimit:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)socialHighlightStoreRequestKeyWithLimit:client:variant:;
@end
