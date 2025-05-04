@interface AWEIMMessageEmoticonReplyPendantViewModel : NSObject
@property (nonatomic) NSArray viewModelList;
@property (nonatomic) BOOL shouldWrap;
@property (nonatomic) BOOL isLightCameraMsg;
@property (nonatomic) {UIEdgeInsets=dddd} contentPadding;
@property (nonatomic) {CGSize=dd} pendantSize;
- (id)pendantSize;
- (void)setPendantSize:;
- (id)viewModelList;
- (void)setViewModelList:;
- (BOOL)isLightCameraMsg;
- (void)setIsLightCameraMsg:;
- (void)setContentPadding:;
- (void).cxx_destruct;
- (id)contentPadding;
- (BOOL)shouldWrap;
- (void)setShouldWrap:;
+ (id)pendantViewModelWithMessage:;
+ (id)pendantViewModelWithWithMessage:titleInsets:interitemSpacing:lineSpacing:;
+ (double)unwrappedMaxWidth;
+ (id)nameAttributedStringWithPropertyItemGroup:conversation:containerSize:useWrapColor:viewModel:nameDictionary:;
@end
