@interface IESECPDPSliceViewPreloadData : IESECBaseApiModel
@property (nonatomic) NSString sliceID;
@property (nonatomic) NSString templateURL;
@property (nonatomic) NSDictionary data;
@property (nonatomic) UIView preloadView;
- (void)setPreloadView:;
- (id)sliceID;
- (id)preloadView;
- (void)setSliceID:;
- (id)templateURL;
- (id)data;
- (void).cxx_destruct;
- (void)setTemplateURL:;
- (void)setData:;
+ (id)JSONKeyPathsByPropertyKey;
@end
