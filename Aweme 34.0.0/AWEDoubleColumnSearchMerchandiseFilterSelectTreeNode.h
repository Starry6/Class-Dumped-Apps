@interface AWEDoubleColumnSearchMerchandiseFilterSelectTreeNode : NSObject
@property (nonatomic) NSString dataID;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseFilterBusinessInfoModel businessInfo;
@property (nonatomic) BOOL shouldAddUserManualSelectInfo;
@property (nonatomic) BOOL userManualSelect;
@property (nonatomic) NSMutableArray childNodes;
- (void)setBusinessInfo:;
- (id)businessInfo;
- (BOOL)shouldAddUserManualSelectInfo;
- (BOOL)isUserManualSelect;
- (id)jsonify;
- (id)initWithDataID:businessInfo:;
- (void)setShouldAddUserManualSelectInfo:;
- (void)setUserManualSelect:;
- (void)appendNode:;
- (void).cxx_destruct;
- (id)childNodes;
- (void)setChildNodes:;
- (id)dataID;
- (void)setDataID:;
@end
