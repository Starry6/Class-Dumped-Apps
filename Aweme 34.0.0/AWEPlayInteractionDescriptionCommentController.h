@interface AWEPlayInteractionDescriptionCommentController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)parserAttributesForDescriptionWithContext:;
- (id)insertOriginalAwemeIfNeededWithContext:;
- (id)insertFromCommentIfNeededWithContext:;
- (BOOL)shouldAppendOriginalAwemeTagWithModel:;
- (id)deleteImageCommentPerStringWithContext:;
- (id)originalAwemeTagAttachmentWithContext:;
- (id)titleAttributeWithContext:;
- (void)originalAwemeTagClickedWithContext:;
- (BOOL)shouldAppendFromCommentTitleWithModel:;
@end
