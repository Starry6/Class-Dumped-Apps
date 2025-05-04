@interface AWEGrouponSubPageGoodsDetailSchemaHandle : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandleWith:;
- (id)updatePageWithOriginSchema:hightPercent:subpageModel:;
- (double)arrowOffsetOfHeightPercent:;
@end
