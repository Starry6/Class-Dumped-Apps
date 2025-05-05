@interface CKXVersionedReaderWriterStore : NSObject
@property (nonatomic) CKXORCReader orcReader;
@property (nonatomic) CKXORCWriter orcWriter;
@property (nonatomic) NSObject<CKXBinding> binding;
@property (nonatomic) NSDictionary optionsByReaderWriterClass;
- (void).cxx_destruct;
- (id)binding;
- (id)initWithBinding:optionsByReaderWriterClass:;
- (id)readerForVersion:;
- (id)writerForVersion:;
- (id)createReaderForVersionIfNecessary:;
- (id)createWriterForVersionIfNecessary:;
- (id)orcReader;
- (void)setOrcReader:;
- (id)orcWriter;
- (void)setOrcWriter:;
- (void)setBinding:;
- (id)optionsByReaderWriterClass;
- (void)setOptionsByReaderWriterClass:;
+ (BOOL)versionSupported:;
@end
