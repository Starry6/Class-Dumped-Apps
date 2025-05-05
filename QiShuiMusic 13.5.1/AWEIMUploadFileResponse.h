@interface AWEIMUploadFileResponse : NSObject
@property (nonatomic) IESIMURLModel urlModel;
@property (nonatomic) AWEIMUploadFileResultItem originItem;
@property (nonatomic) AWEIMUploadFileResultItem quickItem;
@property (nonatomic) BOOL fromCache;
- (BOOL)fromCache;
- (id)originItem;
- (id)quickItem;
- (void)setFromCache:;
- (void)setOriginItem:;
- (void)setQuickItem:;
- (void)setUrlModel:;
- (id)urlModel;
- (void).cxx_destruct;
@end
