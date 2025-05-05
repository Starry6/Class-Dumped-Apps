@interface VKCTranslatedParagraph : NSObject
@property (nonatomic) VKQuad quad;
@property (nonatomic) NSString text;
@property (nonatomic) BOOL isPassthrough;
- (void).cxx_destruct;
- (id)text;
- (id)quad;
- (BOOL)isPassthrough;
- (id)initWithText:quad:isPassthrough:;
@end
