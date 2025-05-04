@interface AWEPlayInteractionDescriptionPlayletVideoController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mixNameFontForWeight:;
- (id)parserAttributesForDescriptionWithContext:;
- (BOOL)shouldInsertMinorAlbumVideoTagWithReferString:;
- (id)insertPlayletVideoTagIfNeededWithContext:;
- (id)insertMinorAlbumVideoTagIfNeededWithContext:;
- (BOOL)shouldInsertPlayletVideoTagWithModel:;
- (id)insertTitle:attributedString:font:isNeedVerticalLine:parserContext:;
- (id)insertTitle:attributedString:font:isNeedVerticalLine:atIndex:parserContext:;
@end
