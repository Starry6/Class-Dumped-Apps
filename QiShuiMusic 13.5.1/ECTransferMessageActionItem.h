@interface ECTransferMessageActionItem : NSObject
@property (nonatomic) NSString sourceRemoteID;
@property (nonatomic) <ECMessage> sourceMessage;
@property (nonatomic) <ECMessage> destinationMessage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithBuilder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)sourceMessage;
- (id)sourceRemoteID;
- (id)destinationMessage;
- (void)setSourceRemoteID:;
- (void)setSourceMessage:;
- (void)setDestinationMessage:;
@end
