@interface CTMessagePart : NSObject
@property (nonatomic) NSString contentType;
@property (nonatomic) NSString contentId;
@property (nonatomic) NSString contentLocation;
@property (nonatomic) NSData data;
- (void)setContentType:;
- (void)setContentId:;
- (id)data;
- (id)contentType;
- (id)contentId;
- (void).cxx_destruct;
- (void)setData:;
- (id)contentTypeParameterWithName:;
- (void)addContentTypeParameterWithName:value:;
- (id)allContentTypeParameterNames;
- (id)initWithData:contentType:;
- (id)contentLocation;
- (void)setContentLocation:;
@end
