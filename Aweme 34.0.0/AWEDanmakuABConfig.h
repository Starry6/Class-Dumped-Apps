@interface AWEDanmakuABConfig : NSObject
+ (long long)renderType;
+ (BOOL)enableOptimizeDanmakuEntranceColor;
+ (BOOL)enableDanmakuAnimationOptimize;
+ (BOOL)enableDanmakuContentSizeOpt;
+ (BOOL)enableSupportDanmakuEgg;
+ (long long)danmakuSettingPanelStyle;
+ (BOOL)enableDanmakuLimitDescription;
+ (BOOL)enableShowGuideDanmaku;
+ (BOOL)enableDanmakuMetalAsync;
+ (BOOL)rebuildFeedDanmakuController;
+ (double)danmakuGuideAnimationDuration;
+ (BOOL)enableDanmakuInputGuide;
+ (BOOL)enableDanmakuHotSpotAdjust;
+ (long long)danmakuInputGuideStyle;
+ (long long)danmakuInputGuideTimes;
+ (long long)danmakuClockInterval;
+ (id)danmakuResourceGeckoChannelName;
+ (id)danmakuEggConfigs;
+ (id)danmakuPendantConfigs;
+ (id)danmakuLatestResourceVersion;
+ (BOOL)enableFixIPadPiP;
+ (BOOL)fixDanmakuSettingStatusTrack;
+ (BOOL)enableDanmakuMetalJamOpt;
+ (BOOL)enableMetalDanmakuContentImageCache;
+ (BOOL)enableDanmakuBufferPoolUseLock;
+ (BOOL)enableDanmakuMetalInvisibleOpt;
+ (BOOL)enableDanmakuMetalEmptyOpt;
+ (BOOL)enableDanmakuMetalContainerFrameOpt;
+ (BOOL)enableDanmakuMetalClearOpt;
+ (BOOL)enableDanmakuMetalImageOpt;
+ (BOOL)danmakuAppendInMainThread;
+ (id)danmakuPriorityConfigs;
+ (BOOL)enableDanmakuAuthorManager;
+ (BOOL)enableDanmakuConfigFromFlow;
+ (BOOL)enableDanmakuDisplayConfigFromFlow;
+ (BOOL)enableDanmakuArchival;
+ (id)danmakuArchivalFuzzyMatchWords;
+ (id)danmakuArchivalAccurateMatchWords;
+ (BOOL)enableDanmakuBubbleOpt;
+ (BOOL)enableDanmakuDislike;
+ (BOOL)enableDanmakuAuthorTagColorOpti;
+ (BOOL)useNewLightStylePopover;
+ (BOOL)useMultiLineVerticalStylePopover;
+ (long long)danmakuPopoverDiggGuideTimes;
+ (long long)danmakuPopoverAutoDismissDuration;
+ (id)danmakuPopoverDiggGuideAnimationUrl;
+ (long long)danmakuConfPortraitStandardTime;
+ (long long)danmakuConfLandscapeStandardTime;
+ (long long)danmakuConfMaxBufferTime;
+ (long long)danmakuConfMaxBufferSize;
+ (BOOL)enableSettingPanelAdaptBigFontMode;
+ (BOOL)enableDanmakuPadAdapt;
+ (BOOL)danmakuPublishShowOpt;
+ (BOOL)enableVideoPeriodicCallbackForKey:;
+ (BOOL)enableLastFullCharOpt;
+ (BOOL)fixDanmakuPlayerStatusCheck;
+ (BOOL)enableDanmakuPlayerStatusUpdate;
+ (id)danmakuSmartModeIntroductionConfig;
+ (BOOL)enableDanmakuSmartModeInteract;
+ (BOOL)danmakuSmartModeShowCount;
+ (BOOL)fixDanmakuHistoryBug;
+ (BOOL)enableDanmakuPlayOptInBackGround;
+ (BOOL)enableDanmakuEnergyConsumer;
+ (BOOL)enableDanmakuUnitViewRebuild;
+ (BOOL)enableDanmakuUnitViewUnloadOpt;
+ (BOOL)enableDanmakuFontAdjust;
+ (BOOL)enableDanmakuErrorMonitor;
+ (double)danmakuStrokeAlpha;
+ (double)danmakuStrokeWidth;
+ (id)danmakuInputUpdatePlaceholder;
+ (BOOL)enableDanmakuDataPreRequest;
+ (BOOL)enableDanmakuCollisionOpt;
@end
