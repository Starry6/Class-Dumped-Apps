@interface AWESearchPhotoSearchRequestWrapper : NSObject
@property (nonatomic) @? completionBlock;
@property (nonatomic) @? responseBlock;
@property (nonatomic) @? detectionsBlock;
- (id)detectionsBlock;
- (void)setDetectionsBlock:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void).cxx_destruct;
- (id)responseBlock;
- (void)setResponseBlock:;
@end
