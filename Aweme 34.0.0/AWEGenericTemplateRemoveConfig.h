@interface AWEGenericTemplateRemoveConfig : NSObject
@property (nonatomic) AWEVideoPublishViewModel repository;
@property (nonatomic) BOOL needUpdateVideoData;
@property (nonatomic) BOOL isPureRemoveScene;
@property (nonatomic) BOOL lastTemplateHasStickers;
@property (nonatomic) @? onWillRemove;
@property (nonatomic) @? onDidRemove;
@property (nonatomic) @? onDidUpdateVideoData;
- (BOOL)lastTemplateHasStickers;
- (void)setLastTemplateHasStickers:;
- (void)setOnDidUpdateVideoData:;
- (void)setIsPureRemoveScene:;
- (void)setOnDidRemove:;
- (void)setNeedUpdateVideoData:;
- (void)setOnWillRemove:;
- (id)onWillRemove;
- (id)onDidRemove;
- (BOOL)needUpdateVideoData;
- (id)onDidUpdateVideoData;
- (BOOL)isPureRemoveScene;
- (id)repository;
- (void).cxx_destruct;
- (void)setRepository:;
@end
