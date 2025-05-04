@interface AWECoverEditorTextViewModel : NSObject
@property (nonatomic) <IESServiceProvider> serviceProvider;
@property (nonatomic) AWEVideoPublishViewModel repository;
@property (nonatomic) @? constructBlock;
@property (nonatomic) @? constructBlockForInfoSticker;
@property (nonatomic) <AWECoverEditorTextViewModelDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasUsedRecommendedText;
- (id)initWithServiceProvider:repository:;
- (id)constructBlock;
- (void)setConstructBlock:;
- (id)constructBlockForInfoSticker;
- (void)setConstructBlockForInfoSticker:;
- (id)delegate;
- (id)repository;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setRepository:;
- (id)serviceProvider;
- (void)setServiceProvider:;
@end
