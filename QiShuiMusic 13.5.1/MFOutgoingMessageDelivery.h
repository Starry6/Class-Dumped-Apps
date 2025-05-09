@interface MFOutgoingMessageDelivery : NSObject
@property (nonatomic) <MFDeliveryDelegate> delegate;
@property (nonatomic) MFAttachmentCompositionContext attachmentContext;
@property (nonatomic) NSDictionary compositionSpecification;
@property (nonatomic) Q conversationFlags;
@property (nonatomic) MFMailMessage originalMessage;
@property (nonatomic) q originalConversationId;
@property (nonatomic) BOOL isUserRequested;
@property (nonatomic) q action;
@property (nonatomic) BOOL shouldSign;
@property (nonatomic) BOOL shouldEncrypt;
- (id)account;
- (id)init;
- (void)setAccount:;
- (void)setDelegate:;
- (long long)action;
- (void)setAction:;
- (id)initWithMessage:;
- (id)delegate;
- (id)message;
- (void).cxx_destruct;
- (BOOL)isUserRequested;
- (long long)deliveryStatus;
- (BOOL)shouldEncrypt;
- (id)attachmentContext;
- (void)setIsUserRequested:;
- (unsigned long long)conversationFlags;
- (void)setConversationFlags:;
- (id)initWithHeaders:mixedContent:textPartsAreHTML:;
- (id)initWithHeaders:HTML:plainTextAlternative:other:;
- (void)setArchiveAccount:;
- (id)originalHeaders;
- (id)compositionSpecification;
- (void)setCompositionSpecification:;
- (id)originalMessageObjectID;
- (id)originalMessage;
- (void)setOriginalMessage:;
- (BOOL)shouldSign;
- (void)setShouldSign:;
- (void)setShouldEncrypt:;
- (id)deliverSynchronouslyWithCompletion:;
- (id)_currentDeliveryObject;
- (id)_deliverSynchronouslyWithCurrentSettings:;
- (id)_deliveryAccountForInitializers;
- (void)setAttachmentContext:;
- (long long)originalConversationId;
- (void)setOriginalConversationId:;
+ (id)newWithMessage:;
+ (id)newWithHeaders:mixedContent:textPartsAreHTML:;
+ (id)newWithHeaders:HTML:plainTextAlternative:other:;
@end
