@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase
- (id)initWithPayload:;
- (void).cxx_destruct;
- (id)validatePayload;
- (id)getPreprocessedPayloadContents;
- (BOOL)setPostprocessedPayloadContents:;
@end
