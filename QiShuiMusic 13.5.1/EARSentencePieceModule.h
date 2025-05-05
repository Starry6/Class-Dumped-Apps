@interface EARSentencePieceModule : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithModelPath:;
- (id)encodeUtterance:;
@end
