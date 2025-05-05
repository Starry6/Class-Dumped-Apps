@interface RTIInputSystemClientSession : NSObject
@property (nonatomic) RTISessionOptions beginOptions;
@property (nonatomic) RTIDocumentTraits documentTraits;
@property (nonatomic) RTIDocumentState documentState;
- (void)setDocumentState:;
- (id)documentState;
- (void).cxx_destruct;
- (id)documentTraits;
- (void)setDocumentTraits:;
- (id)beginOptions;
- (void)setBeginOptions:;
@end
