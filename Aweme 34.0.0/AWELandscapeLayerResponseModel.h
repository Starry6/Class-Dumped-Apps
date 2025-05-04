@interface AWELandscapeLayerResponseModel : AWEBaseApiModel
@property (nonatomic) AWELandscapeLayerListModel forwardListModel;
@property (nonatomic) AWELandscapeLayerListModel reverseListModel;
@property (nonatomic) NSString userStatus;
- (id)forwardListModel;
- (id)reverseListModel;
- (void)setForwardListModel:;
- (void)setReverseListModel:;
- (void).cxx_destruct;
- (id)userStatus;
- (void)setUserStatus:;
+ (id)forwardListModelJSONTransformer;
+ (id)reverseListModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
