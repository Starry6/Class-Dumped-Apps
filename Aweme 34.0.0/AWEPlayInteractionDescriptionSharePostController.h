@interface AWEPlayInteractionDescriptionSharePostController : NSObject
@property (nonatomic) BOOL isCaptionEmpty;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)advanceParserDescriptionWithContext:;
- (id)parserAttributesForDescriptionWithContext:;
- (BOOL)shouldShowSharePost:;
- (void)setIsCaptionEmpty:;
- (BOOL)isNonPostscript:;
- (id)insertSharePostTag:;
- (id)contentString:;
- (BOOL)isCaptionEmpty;
@end
