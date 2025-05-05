@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent
@property (nonatomic) MFLibraryMessage libraryMessage;
- (id)copy;
- (void).cxx_destruct;
- (id)headers;
- (id)libraryContent;
- (id)libraryMessage;
- (void)setLibraryMessage:;
@end
