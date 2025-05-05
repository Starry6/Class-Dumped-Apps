@interface MFOutgoingMessageContent : NSObject
@property (nonatomic) MFMutableMessageHeaders headers;
@property (nonatomic) NSArray placeholders;
@property (nonatomic) MFOutgoingLibraryMessageContent libraryContent;
@property (nonatomic) MFOutgoingRichtextMessageContent richtextContent;
@property (nonatomic) MFOutgoingMultipartRelatedContent multipartContent;
- (id)copy;
- (void)setHeaders:;
- (void).cxx_destruct;
- (id)placeholders;
- (id)headers;
- (id)libraryContent;
- (void)setPlaceholders:;
- (id)richtextContent;
- (id)multipartContent;
@end
