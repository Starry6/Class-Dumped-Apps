@interface AMSURLResponseDecoder : NSObject
@property (nonatomic) NSIndexSet allowedStatusCodes;
@property (nonatomic) NSSet allowedContentTypes;
- (id)init;
- (void)setAllowedContentTypes:;
- (id)allowedContentTypes;
- (void)setAllowedStatusCodes:;
- (id)resultFromResult:error:;
- (id)allowedStatusCodes;
- (void).cxx_destruct;
@end
