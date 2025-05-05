@interface IESLiveCommentStructureContent : NSObject
@property (nonatomic) NSString metaContent;
@property (nonatomic) NSString content;
@property (nonatomic) NSArray allParts;
- (void)setMetaContent:;
- (id)allParts;
- (void)setAllParts:;
- (id)structurePartsToJSONStringExceptText;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)metaContent;
@end
