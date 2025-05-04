@interface AWEHotSpotInnerContext : NSObject
@property (nonatomic) NSString referString;
@property (nonatomic) NSString previousPage;
@property (nonatomic) BOOL isNearByStyle;
@property (nonatomic) q hotFeedStyle;
@property (nonatomic) <AWEHotPointPanelControllerDelegate> delegate;
@property (nonatomic) NSString hotSpotServerParamStr;
@property (nonatomic) NSDictionary bizParams;
- (id)referString;
- (void)setReferString:;
- (id)bizParams;
- (void)setBizParams:;
- (long long)hotFeedStyle;
- (id)hotSpotServerParamStr;
- (void)setHotSpotServerParamStr:;
- (void)setIsNearByStyle:;
- (void)setHotFeedStyle:;
- (BOOL)isNearByStyle;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)copyWithZone:;
- (id)previousPage;
- (void)setPreviousPage:;
@end
