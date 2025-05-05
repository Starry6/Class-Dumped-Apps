@interface AVContentKey : NSObject
@property (nonatomic) AVContentKeySpecifier contentKeySpecifier;
- (void)dealloc;
- (id)cryptor;
- (id)contentKeySpecifier;
- (id)initWithSpecifier:andCryptor:;
+ (id)contentKeyWithSpecifier:andCryptor:;
@end
