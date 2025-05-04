@interface AWEMediaDownloadControlServer : HTSService
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSMutableDictionary downloadStructDict;
@property (nonatomic) Q currentPanel;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEAwemeACLItem downloadStruct;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)startContextWithPanelType:aweme:enterFrom:;
- (void)endContext;
- (id)downloadStruct;
- (void)setDownloadStruct:;
- (void)didConfigureShareView:withContext:;
- (void)setCurrentPanel:;
- (id)downloadStructDict;
- (void)p_checkDiff;
- (unsigned long long)currentPanel;
- (id)p_downloadStructWithPanelType:;
- (id)p_keyWithPanelType:;
- (id)p_trackKeyWithPanelType:;
- (void)setDownloadStructDict:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
@end
