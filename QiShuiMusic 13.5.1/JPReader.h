@interface JPReader : NSObject
@property (nonatomic) ^{JetPackReader=} backing;
@property (nonatomic) @? fileEntryFound;
@property (nonatomic) @? dataSegmentFound;
@property (nonatomic) @? keyForIdentifier;
- (id)init;
- (void)dealloc;
- (id)backing;
- (void)setDataSegmentFound:;
- (id)fileEntryFound;
- (void)setFileEntryFound:;
- (BOOL)processStream:signatureVerifier:options:error:;
- (void).cxx_destruct;
- (void)setBacking:;
- (id)keyForIdentifier;
- (id)dataSegmentFound;
- (void)setKeyForIdentifier:;
- (id)convertError;
@end
