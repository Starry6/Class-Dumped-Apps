@interface AWELeftSideBarCellShowTrackModel : NSObject
@property (nonatomic) NSString identification;
@property (nonatomic) NSString barID;
@property (nonatomic) NSString barTitle;
@property (nonatomic) NSString barStatus;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString entranceStatus;
@property (nonatomic) NSDictionary timorBusinessParams;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString itemTitle;
@property (nonatomic) q itemOrder;
@property (nonatomic) NSString moduleID;
@property (nonatomic) NSString modulePos;
- (void)setEnterMethod:;
- (void)setExtraParams:;
- (id)enterMethod;
- (id)extraParams;
- (id)barTitle;
- (void)setIdentification:;
- (id)barID;
- (void)setBarID:;
- (void)setBarTitle:;
- (id)modulePos;
- (void)setModulePos:;
- (id)barStatus;
- (void)setBarStatus:;
- (long long)itemOrder;
- (void)setItemOrder:;
- (id)entranceStatus;
- (void)setEntranceStatus:;
- (void)setTimorBusinessParams:;
- (id)timorBusinessParams;
- (id)itemID;
- (void)setItemID:;
- (void).cxx_destruct;
- (id)itemTitle;
- (void)setItemTitle:;
- (id)moduleID;
- (void)setModuleID:;
- (id)identification;
@end
