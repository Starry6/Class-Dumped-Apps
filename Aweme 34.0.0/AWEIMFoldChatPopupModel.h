@interface AWEIMFoldChatPopupModel : AWEBaseApiModel
@property (nonatomic) NSArray foldGroupList;
@property (nonatomic) NSString topImageUrl;
@property (nonatomic) BOOL dontPullInNextBootstrap;
@property (nonatomic) NSArray items;
@property (nonatomic) AWEURLModel bgImageUrlModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)popupID;
- (id)popupName;
- (id)popupViewTitle;
- (id)popupViewDescText;
- (id)bgImageUrlModel;
- (void)setBgImageUrlModel:;
- (id)foldGroupList;
- (void)setFoldGroupList:;
- (id)topImageUrl;
- (void)setTopImageUrl:;
- (BOOL)dontPullInNextBootstrap;
- (void)setDontPullInNextBootstrap:;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
+ (id)foldGroupListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
