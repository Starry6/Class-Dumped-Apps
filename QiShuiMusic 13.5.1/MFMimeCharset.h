@interface MFMimeCharset : NSObject
@property (nonatomic) BOOL useBase64InHeaders;
@property (nonatomic) I cfStringEncoding;
@property (nonatomic) Q encoding;
@property (nonatomic) NSString charsetName;
@property (nonatomic) NSString displayName;
@property (nonatomic) BOOL canBeUsedForOutgoingMessages;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)primaryLanguage;
- (unsigned long long)encoding;
- (id)initWithCoder:;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)_setPrimaryLanguage:;
- (id)initWithEncoding:;
- (unsigned int)cfStringEncoding;
- (id)charsetName;
- (BOOL)canBeUsedForOutgoingMessages;
- (BOOL)coversLargeUnicodeSubset;
- (BOOL)useBase64InHeaders;
+ (BOOL)supportsSecureCoding;
+ (id)charsetForEncoding:;
+ (id)preferredMimeCharset;
+ (id)allMimeCharsets:;
+ (id)allMimeCharsets;
@end
