@interface AWEIMUploadFileResponse : MTLModel
@property (nonatomic) AWEURLModel urlModel;
@property (nonatomic) AWEIMUploadFileResultItem originItem;
@property (nonatomic) AWEIMUploadFileResultItem quickItem;
@property (nonatomic) BOOL fromCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)originItem;
- (id)urlModel;
- (BOOL)fromCache;
- (void)setOriginItem:;
- (void)setUrlModel:;
- (id)quickItem;
- (void)setFromCache:;
- (void)setQuickItem:;
- (void).cxx_destruct;
@end
