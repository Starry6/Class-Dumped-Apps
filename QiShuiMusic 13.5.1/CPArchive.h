@interface CPArchive : NSObject
- (id)init;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)webArchiveData;
- (id)html;
- (id)plainText;
- (void)addSelection:;
@end
