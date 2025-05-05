@interface IESECLiveGoodsRelatedCardRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSString authorOpenID;
@property (nonatomic) NSString entranceInfo;
@property (nonatomic) NSString containerRoomID;
@property (nonatomic) NSString containerAuthorID;
@property (nonatomic) NSString storeID;
@property (nonatomic) NSString addressInfo;
@property (nonatomic) NSString relatedInfo;
- (id)containerRoomID;
- (void)setAddressInfo:;
- (void)setRelatedInfo:;
- (id)authorOpenID;
- (id)buildParams;
- (id)containerAuthorID;
- (id)entranceInfo;
- (id)relatedInfo;
- (void)setAuthorOpenID:;
- (void)setContainerAuthorID:;
- (void)setContainerRoomID:;
- (void)setEntranceInfo:;
- (id)storeID;
- (void)setStoreID:;
- (void).cxx_destruct;
- (id)addressInfo;
@end
