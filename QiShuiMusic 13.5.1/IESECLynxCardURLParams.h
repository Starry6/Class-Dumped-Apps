@interface IESECLynxCardURLParams : NSObject
@property (nonatomic) BOOL disableLoadingWhenNotAllOnUI;
@property (nonatomic) BOOL allowOverBounds;
@property (nonatomic) q threadStrategy;
@property (nonatomic) NSDictionary allQueryDict;
@property (nonatomic) BOOL useRestDataToUpdateItemModel;
@property (nonatomic) NSString cardTemplateName;
- (BOOL)allowOverBounds;
- (id)allQueryDict;
- (id)cardTemplateName;
- (BOOL)disableLoadingWhenNotAllOnUI;
- (void)setAllQueryDict:;
- (void)setAllowOverBounds:;
- (void)setCardTemplateName:;
- (void)setDisableLoadingWhenNotAllOnUI:;
- (void)setThreadStrategy:;
- (void)setUseRestDataToUpdateItemModel:;
- (long long)threadStrategy;
- (BOOL)useRestDataToUpdateItemModel;
- (void).cxx_destruct;
@end
