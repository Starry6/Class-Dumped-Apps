@interface AWEIMLocalGIFDataManager : NSObject
@property (nonatomic) <IESIMStorageProtocol> gifStore;
- (void)fetchRemoteData;
- (id)gifStore;
- (id)getKeywordIDForText:;
- (void)setGifStore:;
- (id)init;
- (void).cxx_destruct;
@end
