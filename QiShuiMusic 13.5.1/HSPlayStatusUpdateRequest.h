@interface HSPlayStatusUpdateRequest : HSRequest
@property (nonatomic) I interfaceID;
@property (nonatomic) I revisionID;
- (BOOL)isConcurrent;
- (double)timeoutInterval;
- (unsigned int)revisionID;
- (unsigned int)interfaceID;
- (id)canonicalResponseForResponse:;
- (id)initWithInterfaceID:revisionID:;
@end
