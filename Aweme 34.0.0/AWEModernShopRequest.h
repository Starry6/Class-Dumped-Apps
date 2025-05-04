@interface AWEModernShopRequest : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString refer;
@property (nonatomic) NSString entranceLocation;
@property (nonatomic) NSString fromAwemeId;
@property (nonatomic) NSDictionary extraData;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)secUid;
- (void)setRefer:;
- (id)refer;
- (void)setSecUid:;
- (void)setEntranceLocation:;
- (id)entranceLocation;
- (id)fromAwemeId;
- (void)setFromAwemeId:;
- (void)setUid:;
- (id)uid;
- (void).cxx_destruct;
- (id)extraData;
- (void)setExtraData:;
@end
