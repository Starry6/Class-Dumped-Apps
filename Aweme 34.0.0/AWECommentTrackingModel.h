@interface AWECommentTrackingModel : NSObject
@property (nonatomic) NSString previousPage;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString serviceID;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)pageLogString;
- (void)configBTMInfo:;
- (id)itemID;
- (void)setItemID:;
- (id)init;
- (void)setServiceID:;
- (id)serviceID;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:;
- (id)trackInfo;
@end
