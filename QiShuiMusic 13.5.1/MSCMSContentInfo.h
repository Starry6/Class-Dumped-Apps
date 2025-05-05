@interface MSCMSContentInfo : NSObject
@property (nonatomic) NSData content;
@property (nonatomic) <MSCMSMessage> embeddedContent;
@property (nonatomic) MSOID contentType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setContentType:;
- (id)content;
- (void)setContent:;
- (id)contentType;
- (void).cxx_destruct;
- (id)embeddedContent;
- (id)encodeMessageSecurityObject:;
- (void)setEmbeddedContent:;
- (id)initWithEmbeddedContent:;
- (id)initWithDataContent:;
+ (id)decodeMessageSecurityObject:options:error:;
@end
