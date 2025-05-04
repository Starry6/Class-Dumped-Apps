@interface AWEIMEmoticonDeleteSendComponent : AWEIMComponentBase
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) NSHashTable deleteSendCellSet;
@property (nonatomic) BOOL sendButtonEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)updateWithDeleteSendCollectionViewCell:;
- (void)setSendButtonEnabled:;
- (id)deleteSendCellSet;
- (void)setDeleteSendCellSet:;
- (void).cxx_destruct;
- (BOOL)sendButtonEnabled;
- (BOOL)hasBackgroundImage;
- (void)setHasBackgroundImage:;
@end
