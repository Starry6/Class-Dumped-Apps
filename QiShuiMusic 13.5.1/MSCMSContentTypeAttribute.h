@interface MSCMSContentTypeAttribute : NSObject
@property (nonatomic) MSOID contentType;
- (void)setContentType:;
- (id)contentType;
- (void).cxx_destruct;
- (id)initWithAttribute:error:;
- (id)initWithOID:;
- (id)encodeAttributeWithError:;
+ (id)contentTypeAttributeWithOID:;
@end
