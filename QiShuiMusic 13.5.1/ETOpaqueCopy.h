@interface ETOpaqueCopy : NSObject
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithAbstractBlobContainer:;
- (id)getBlob;
@end
