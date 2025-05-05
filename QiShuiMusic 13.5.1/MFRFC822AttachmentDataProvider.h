@interface MFRFC822AttachmentDataProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithMessage:;
- (void).cxx_destruct;
- (id)storageLocationForAttachment:withMessage:;
- (void)fetchDataForAttachment:consumer:progress:completion:;
- (id)messageForAttachment:;
- (id)initWithMessageData:parentPart:;
- (id)initWithMessageData:parentPart:managed:;
- (id)initWithMessage:managed:;
@end
