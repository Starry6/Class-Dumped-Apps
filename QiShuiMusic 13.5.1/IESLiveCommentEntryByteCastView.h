@interface IESLiveCommentEntryByteCastView : IESLiveCommentEntryBaseView
@property (nonatomic) <IESLiveByteCastProviderAdapter> byteCastProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)byteCastProvider;
- (void)castDanmakuButtonClicked:;
- (void)commentEntryUpdate;
- (void)didSetAttachingDIContext;
- (void)didSetEnableNormalDanmuku:;
- (id)entryViewType;
- (void)setByteCastProvider:;
- (void)setupExpandButton;
- (void)setupInnerButton;
- (void)willSupportCastDanmaku:;
- (id)intrinsicContentSize;
- (void).cxx_destruct;
@end
