@interface MFMailDropMailDeliveryUI : MFMailDropMailDelivery
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)deliverSynchronouslyWithCompletion:;
- (id)scaledImages:;
- (BOOL)updateMessageWithAttachmentsSynchronously;
- (id)contentForURL:;
- (id)contentForContentID:;
- (id)contentForPlaceholder:;
- (id)_scaleImages:toFit:resultingSize:;
- (id)_headersByAddingMailDropHeaders:;
- (id)_mailDropAttachmentHTMLStringForAttachment:;
- (id)_contentForAttachmentPassingTest:;
- (id)_mailDropBannerHTMLString;
@end
