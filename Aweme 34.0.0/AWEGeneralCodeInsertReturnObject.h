@interface AWEGeneralCodeInsertReturnObject : NSObject
@property (nonatomic) UIImage publishSingleIconImage;
@property (nonatomic) NSString publishSingleTitle;
@property (nonatomic) AWEECGeneralCommetModel commentAnchorModel;
@property (nonatomic) NSString commentOpenURL;
- (void)setCommentOpenURL:;
- (id)commentOpenURL;
- (void)setPublishSingleTitle:;
- (void)setPublishSingleIconImage:;
- (void)setCommentAnchorModel:;
- (id)publishSingleIconImage;
- (id)publishSingleTitle;
- (id)commentAnchorModel;
- (void).cxx_destruct;
@end
