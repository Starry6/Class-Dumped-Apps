@interface IESECPDPSlideViewReqContext : NSObject
@property (nonatomic) NSString roomID;
@property (nonatomic) NSString secAuthorID;
@property (nonatomic) NSString ecomSceneID;
@property (nonatomic) NSString entranceInfo;
@property (nonatomic) NSString v3EventAdditions;
@property (nonatomic) NSString extraParam;
@property (nonatomic) NSString scene;
- (void)setEcomSceneID:;
- (void)setSecAuthorID:;
- (id)ecomSceneID;
- (id)entranceInfo;
- (id)extraParam;
- (id)secAuthorID;
- (void)setEntranceInfo:;
- (void)setExtraParam:;
- (void)setV3EventAdditions:;
- (id)v3EventAdditions;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
@end
