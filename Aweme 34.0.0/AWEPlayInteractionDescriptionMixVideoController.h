@interface AWEPlayInteractionDescriptionMixVideoController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)parserAttributesForDescriptionWithContext:;
- (BOOL)shouldAppendMixVideoTagWithContext:;
- (id)insertTitleWithContext:;
- (BOOL)shouldInsertMinorAlbumVideoTagWithReferString:;
@end
