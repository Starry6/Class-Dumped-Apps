@interface BUPlayableAd : NSObject
@property (nonatomic) UIView containerView;
@property (nonatomic) <BUPInnerContainerProtocol> playableContainer;
@property (nonatomic) BUPlayableSafeDictionary logDictinary;
@property (nonatomic) BUPlayableSafeArray interceptArray;
@property (nonatomic) BUPlayableSafeArray switchBackgroundArray;
@property (nonatomic) NSMutableDictionary logH5Dictinary;
@property (nonatomic) NSString session_id;
@property (nonatomic) q user_perception_start_timestamp;
@property (nonatomic) q detect_stuck_timestamp;
@property (nonatomic) q page_show_timestamp;
@property (nonatomic) q page_load_timestamp;
@property (nonatomic) q page_load_finish_timestamp;
@property (nonatomic) q page_viewable_timestamp;
@property (nonatomic) q page_viewable_renderStart;
@property (nonatomic) q page_viewable_renderFinish;
@property (nonatomic) q page_show_duration;
@property (nonatomic) q page_material_interactable_load_duration;
@property (nonatomic) q res_request_times;
@property (nonatomic) q res_hit_times;
@property (nonatomic) q playable_back_count;
@property (nonatomic) q playable_leave_count;
@property (nonatomic) BOOL firstViewable;
@property (nonatomic) BOOL firstInvisible;
@property (nonatomic) NSTimer jsbConnectingTimer;
@property (nonatomic) q webViewStatus;
@property (nonatomic) BOOL isPlayableShow;
@property (nonatomic) NSArray hostExistPiperArray;
@property (nonatomic) NSArray playableAdAllPiperArray;
@property (nonatomic) NSMutableArray playableAdJSBArray;
@property (nonatomic) BOOL loadJSSDKSuccess;
@property (nonatomic) BOOL hasHandleError;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) BOOL hasCaptureStuck;
@property (nonatomic) NSString playableNetworkType;
@property (nonatomic) BOOL userHasWaitedPlayableAd;
@property (nonatomic) q detectStuckSendPingTime;
@property (nonatomic) q detectStuckReceivePongTime;
@property (nonatomic) BOOL playableGlobalViewable;
@property (nonatomic) <BUPlayableHapticPlayer> hapticPlayer;
@property (nonatomic) Q renderType;
@property (nonatomic) Q scenesType;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) BOOL manualRegisterJSB;
@property (nonatomic) BOOL isPrerender;
@property (nonatomic) UIView containerSuperView;
@property (nonatomic) UIViewController containerViewController;
@property (nonatomic) UIScrollView feedScrollView;
@property (nonatomic) <BUPlayableAdDelegate> delegate;
@property (nonatomic) NSString playableStyle;
@property (nonatomic) NSString idfaString;
@property (nonatomic) NSString deviceId;
@property (nonatomic) NSDictionary appInfoExt;
@property (nonatomic) NSString playable_url;
@property (nonatomic) NSString geckoKey;
@property (nonatomic) NSString geckoChannel;
@property (nonatomic) NSString gameId;
@property (nonatomic) NSDictionary hg_params;
@property (nonatomic) NSString appName;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL isContainerViewShow;
@property (nonatomic) double containerTimeout;
@property (nonatomic) double jsSDKTimeout;
@property (nonatomic) BOOL disablePlayableClickReport;
@property (nonatomic) BOOL isDebug;
@property (nonatomic) NSString cid;
@property (nonatomic) q replayCount;
@property (nonatomic) q retryCount;
@property (nonatomic) q playableSequence;
@property (nonatomic) NSString playableCurrentSection;
@property (nonatomic) Q playableEnterFrom;
@property (nonatomic) Q playableLeft;
@property (nonatomic) Q playableBackgroundShowType;
@property (nonatomic) BOOL isPlayableFinish;
@property (nonatomic) q webLoadStatus;
@property (nonatomic) BOOL cancelDetectTask;
@property (nonatomic) double safeAreaTopHeightRatio;
@property (nonatomic) double safeAreaBottomHeightRatio;
@property (nonatomic) double autoDetectTimeInterval;
@property (nonatomic) double manualDetectTimeInterval;
@property (nonatomic) NSString playableCardSession;
@property (nonatomic) NSString playableVideoSession;
@property (nonatomic) NSString lynxVersion;
@property (nonatomic) BOOL openBlankDetectFlag;
@property (nonatomic) NSString itemID;
- (id)clickAreaParams;
- (void)handlePageStuckWithType:reason:;
- (id)bupl_playble_tool_lagWithParam:;
- (BOOL)hasCaptureStuck;
- (void)setDetectTimer:;
- (void)setIsPrerender:;
- (void)setLynxVersion:;
- (long long)user_perception_start_timestamp;
- (void)appDidEnterBackgroundNotification:;
- (id)appInfoDictionary;
- (id)appInfoExt;
- (void)appWillEnterForegroundNotification:;
- (void)appWillTerminateNotification:;
- (double)autoDetectTimeInterval;
- (BOOL)avaiableInContainer;
- (id)bupl_adInfoWithParam:;
- (id)bupl_appInfoWithParam:;
- (id)bupl_check_camera_permissionWithParam:;
- (id)bupl_check_external_storageWithParam:;
- (id)bupl_closeWithParam:;
- (id)bupl_close_accelerometer_grativityless_observerWithParam:;
- (id)bupl_close_accelerometer_observerWithParam:;
- (id)bupl_close_gyro_observerWithParam:;
- (id)bupl_close_rotation_vector_observerWithParam:;
- (id)bupl_detect_change_playable_clickWithParam:;
- (id)bupl_device_shakeWithParam:;
- (id)bupl_device_shake_shortWithParam:;
- (id)bupl_getScreenSizeWithParam:;
- (id)bupl_getVolumeWithParam:;
- (id)bupl_get_viewportWithParam:;
- (id)bupl_isViewableWithParam:;
- (id)bupl_jssdk_load_finishWithParam:;
- (id)bupl_logWithParam:;
- (id)bupl_openAdLandPageLinksWithParam:;
- (id)bupl_open_app_storeWithParam:;
- (id)bupl_playableSDKInfoWithParam:;
- (id)bupl_playable_alpha_player_playWithParam:;
- (id)bupl_playable_apply_media_permissionWithParam:;
- (id)bupl_playable_click_areaWithParam:;
- (id)bupl_playable_download_media_in_photosWithParam:;
- (id)bupl_playable_endWithParam:;
- (id)bupl_playable_enter_sectionWithParam:;
- (id)bupl_playable_eventWithParam:;
- (id)bupl_playable_finish_play_playableWithParam:;
- (id)bupl_playable_haptic_engine_initWithParam:;
- (id)bupl_playable_haptic_engine_pauseWithParam:;
- (id)bupl_playable_haptic_engine_playWithParam:;
- (id)bupl_playable_haptic_engine_play_fileWithParam:;
- (id)bupl_playable_haptic_engine_play_innerWithParam:;
- (id)bupl_playable_haptic_engine_resumeWithParam:;
- (id)bupl_playable_haptic_engine_stopWithParam:;
- (id)bupl_playable_haptic_engine_supportsWithParam:;
- (id)bupl_playable_load_main_sceneWithParam:;
- (id)bupl_playable_long_press_panelWithParam:;
- (id)bupl_playable_material_adnormal_maskWithParam:;
- (id)bupl_playable_material_first_frame_showWithParam:;
- (id)bupl_playable_material_render_resultWithParam:;
- (id)bupl_playable_open_cameraWithParam:;
- (id)bupl_playable_pick_photoWithParam:;
- (id)bupl_playable_query_media_permission_declareWithParam:;
- (id)bupl_playable_query_media_permission_enableWithParam:;
- (id)bupl_playable_ready_eventWithParam:;
- (id)bupl_playable_real_play_startWithParam:;
- (id)bupl_playable_send_click_eventWithParam:;
- (id)bupl_playable_set_scroll_rectWithParam:;
- (id)bupl_playable_settings_infoWithParam:;
- (id)bupl_playable_stuck_check_pongWithParam:;
- (id)bupl_playable_styleWithParam:;
- (id)bupl_playable_tool_freezeWithParam:;
- (id)bupl_playable_tool_heart_beatWithParam:;
- (id)bupl_playable_transfrom_module_change_colorWithParam:;
- (id)bupl_playable_transfrom_module_highlightWithParam:;
- (id)bupl_playable_transfrom_module_showWithParam:;
- (id)bupl_playable_video_preload_task_addWithParam:;
- (id)bupl_playable_video_preload_task_cancelWithParam:;
- (id)bupl_preload_app_adWithParam:;
- (id)bupl_preventTouchEventWithParam:;
- (id)bupl_reportAdWithParam:;
- (id)bupl_sendRewardWithParam:;
- (id)bupl_start_accelerometer_grativityless_observerWithParam:;
- (id)bupl_start_accelerometer_observerWithParam:;
- (id)bupl_start_gyro_observerWithParam:;
- (id)bupl_start_rotation_vector_observerWithParam:;
- (id)bupl_webview_time_trackWithParam:;
- (void)callDetectLynxFunction;
- (BOOL)canThrowEvent;
- (BOOL)cancelDetectTask;
- (void)changePlayableClick:;
- (void)configWithContainerView:;
- (void)connectToLynxJsbEnv;
- (void)connectingLynxJsb;
- (id)containerSuperView;
- (double)containerTimeout;
- (id)convertContainerViewChangedParams:visibleFrame:;
- (id)csj_excuteJSBMethod:params:;
- (void)csj_fireEvent:params:;
- (BOOL)csj_responseToJSBMethod:;
- (long long)currentMaterialViewableTime;
- (void)detectIfRequired;
- (unsigned long long)detectStatus;
- (long long)detectStuckReceivePongTime;
- (long long)detectStuckSendPingTime;
- (id)detectTimer;
- (void)detectUserOperateStuck:;
- (long long)detect_stuck_timestamp;
- (BOOL)disablePlayableClickReport;
- (id)excuteJSBMethod:params:;
- (void)excuteJavaScriptMethod;
- (void)excuteJavaScriptMethodInternal;
- (id)feedScrollView;
- (void)fireEvent:params:;
- (BOOL)firstInvisible;
- (BOOL)firstViewable;
- (id)gameId;
- (id)geckoChannel;
- (id)geckoKey;
- (void)handelPlayableDestroyAnalyzeSummaryTrackEvent;
- (void)handelPlayableDetectBlankScreenResultTrackEvent:;
- (void)handelPlayableDetectBlankScreenResultWithDetectType:areaRate:;
- (void)handelPlayableGlobalViewable:;
- (void)handelPlayableGlobalViewableTrackEvent:;
- (void)handelPlayableHardwareDialogCancel:;
- (void)handelPlayableHardwareDialogCancelTrackEvent:;
- (void)handelPlayableHardwareDialogSetting:;
- (void)handelPlayableHardwareDialogSettingTrackEvent:;
- (void)handelPlayableViewFirstVisibleTrackEvent;
- (void)handelPlayableViewUserPerceptionStart;
- (void)handelPlayableViewUserPerceptionStartTrackEvent:;
- (void)handleContainerRenderError:error:;
- (void)handleContainerRenderErrorTrackEventWithError:;
- (void)handleContainerRenderFaild:error:;
- (void)handleContainerRenderFaildTrackEventWithError:;
- (void)handleContainerRenderFinish:;
- (void)handleContainerRenderFinishTrackEvent;
- (void)handleContainerRenderStart:;
- (void)handleContainerRenderStartTrackEvent;
- (void)handleContainerView:didFailLoadWithError:;
- (void)handleContainerViewChanged:visibleFrame:;
- (void)handleContainerViewDidFailLoadTrackEventWithError:;
- (void)handleContainerViewDidFinishLoad:;
- (void)handleContainerViewDidFinishLoadTrackEvent;
- (void)handleContainerViewDidStartLoad:;
- (void)handleContainerViewDidStartLoadTrackEvent;
- (void)handleGlobalPageFailedTrackEventWithErrorCode:;
- (void)handleGlobalPageFailedWithErrorCode:;
- (void)handleJSBEvent:params:;
- (void)handleJSBEventTrackEvent:params:;
- (void)handleJSRunStuck;
- (id)handleLynxPlayableUrl;
- (void)handleNativeAppStoreClick;
- (void)handleNativeAppStoreClickTrackEvent;
- (void)handlePlayableCellDisappear;
- (void)handlePlayableHardWareDetectTrackEvent;
- (void)handlePlayableJSSDKloadSuccessTrackEvent;
- (void)handlePlayableMaterialFirstFrameShowTrackEvent;
- (void)handlePlayableMaterialInteractableTrackEvent;
- (void)handlePlayablePageStuck:;
- (void)handlePlayablePageStuckTrackEvent:;
- (void)handlePlayableShouldDetectBlankScreenWithType:;
- (void)handlePlayableViewClose;
- (void)handlePlayableViewClosedTrackEvent;
- (void)handlePlayableViewFirstShowEventWithVisible:;
- (void)handlePlayableViewFrameChange;
- (void)handlePlayableViewShow;
- (void)handlePlayableViewTrackEventWithVisible:;
- (void)handlePlayableViewVisible:repeat:;
- (void)handleWebViewInterceptDictWithStartTime:url:isCache:extraDic:;
- (BOOL)hasHandleError;
- (id)hg_params;
- (id)hostExistPiperArray;
- (id)idfaString;
- (id)initWithExistPiperArray:piperDelegate:;
- (id)initWithExistPiperArray:piperDelegate:type:;
- (id)initWithExistPiperArray:piperDelegate:type:manualRegisterJSB:;
- (id)interceptArray;
- (id)interceptDictWithStartTime:url:type:isCache:extraDic:;
- (BOOL)isContainerViewShow;
- (BOOL)isLynx;
- (BOOL)isLynxFatalErrorCode:;
- (BOOL)isPlayableFinish;
- (BOOL)isPlayableShow;
- (BOOL)isPlayableURL;
- (BOOL)isPreload;
- (BOOL)isPrerender;
- (BOOL)isUserOperateDetect;
- (BOOL)isWebView;
- (void)jsCallNative_webview_time_trackWithParams:;
- (double)jsSDKTimeout;
- (id)jsbConnectingTimer;
- (BOOL)loadJSSDKSuccess;
- (void)loadPlayableAdUrl:;
- (id)logDictinary;
- (id)logExtraDic;
- (id)logH5Dictinary;
- (id)lynxVersion;
- (double)manualDetectTimeInterval;
- (BOOL)manualRegisterJSB;
- (id)netWorkStatus;
- (BOOL)openBlankDetectFlag;
- (long long)page_load_finish_timestamp;
- (long long)page_load_timestamp;
- (long long)page_material_interactable_load_duration;
- (long long)page_show_duration;
- (long long)page_show_timestamp;
- (long long)page_viewable_renderFinish;
- (long long)page_viewable_renderStart;
- (long long)page_viewable_timestamp;
- (id)playableAdAllPiperArray;
- (id)playableAdJSBArray;
- (unsigned long long)playableBackgroundShowType;
- (id)playableCardSession;
- (id)playableContainer;
- (id)playableCurrentSection;
- (unsigned long long)playableEnterFrom;
- (BOOL)playableGlobalViewable;
- (unsigned long long)playableLeft;
- (id)playableNetworkType;
- (void)playableSendReplay;
- (long long)playableSequence;
- (id)playableStyle;
- (id)playableVideoSession;
- (long long)playable_back_count;
- (long long)playable_leave_count;
- (id)playable_url;
- (id)publicParameters:;
- (void)registerPiperBridge;
- (void)registerPiperBridgeInternal;
- (void)registerPrivateJSMethod;
- (unsigned long long)renderType;
- (long long)res_hit_times;
- (long long)res_request_times;
- (void)resetPlayable;
- (void)resetVariables;
- (BOOL)responseToJSBMethod:;
- (void)runTimer;
- (double)safeAreaBottomHeightRatio;
- (double)safeAreaTopHeightRatio;
- (unsigned long long)scenesType;
- (void)setAppInfoExt:;
- (void)setAutoDetectTimeInterval:;
- (void)setCancelDetectTask:;
- (void)setClickAreaParams:;
- (void)setContainerSuperView:;
- (void)setContainerTimeout:;
- (void)setCurrentLogType:extraDic:;
- (void)setDetectStatus:;
- (void)setDetectStuckReceivePongTime:;
- (void)setDetectStuckSendPingTime:;
- (void)setDetect_stuck_timestamp:;
- (void)setDisablePlayableClickReport:;
- (void)setFeedScrollView:;
- (void)setFirstInvisible:;
- (void)setFirstViewable:;
- (void)setGameId:;
- (void)setGeckoChannel:;
- (void)setGeckoKey:;
- (void)setHasCaptureStuck:;
- (void)setHasHandleError:;
- (void)setHg_params:;
- (void)setHostExistPiperArray:;
- (void)setIdfaString:;
- (void)setInterceptArray:;
- (void)setIsContainerViewShow:;
- (void)setIsPlayableFinish:;
- (void)setIsPreload:;
- (void)setIsUserOperateDetect:;
- (void)setJsSDKTimeout:;
- (void)setJsbConnectingTimer:;
- (void)setLoadJSSDKSuccess:;
- (void)setLogDictinary:;
- (void)setLogH5Dictinary:;
- (void)setManualDetectTimeInterval:;
- (void)setOpenBlankDetectFlag:;
- (void)setPage_load_finish_timestamp:;
- (void)setPage_load_timestamp:;
- (void)setPage_material_interactable_load_duration:;
- (void)setPage_show_duration:;
- (void)setPage_show_timestamp:;
- (void)setPage_viewable_renderFinish:;
- (void)setPage_viewable_renderStart:;
- (void)setPage_viewable_timestamp:;
- (void)setPlayableAdAllPiperArray:;
- (void)setPlayableAdJSBArray:;
- (void)setPlayableBackgroundShowType:;
- (void)setPlayableCardSession:;
- (void)setPlayableContainer:;
- (void)setPlayableCurrentSection:;
- (void)setPlayableEnterFrom:;
- (void)setPlayableGlobalViewable:;
- (void)setPlayableLeft:;
- (void)setPlayableNetworkType:;
- (void)setPlayableSequence:;
- (void)setPlayableStyle:;
- (void)setPlayableVideoSession:;
- (void)setPlayable_back_count:;
- (void)setPlayable_leave_count:;
- (void)setPlayable_url:;
- (void)setRes_hit_times:;
- (void)setRes_request_times:;
- (void)setSafeAreaBottomHeightRatio:;
- (void)setSafeAreaTopHeightRatio:;
- (void)setScenesType:;
- (void)setSwitchBackgroundArray:;
- (void)setUserHasWaitedPlayableAd:;
- (void)setUser_perception_start_timestamp:;
- (void)setWebLoadStatus:;
- (void)setWebViewStatus:;
- (void)startDetect;
- (void)stopDetect;
- (void)switchBackgroundAndForegroundLog:extraDic:;
- (id)switchBackgroundArray;
- (void)testJSContextStuckCompletion:;
- (void)trackEvent:params:;
- (id)unregisteredPiperDict;
- (void)updateInnerContainerViewFrame:;
- (BOOL)userHasWaitedPlayableAd;
- (long long)webLoadStatus;
- (long long)webViewStatus;
- (BOOL)mute;
- (id)deviceId;
- (void)setDeviceId:;
- (void)dealloc;
- (void)setViewController:;
- (id)containerView;
- (id)containerViewController;
- (id)itemID;
- (void)setContainerView:;
- (void)setDelegate:;
- (void)setContainerViewController:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)setRetryCount:;
- (void)setAppName:;
- (void)pauseTimer;
- (void)setItemID:;
- (id)appName;
- (void)setMute:;
- (id)cid;
- (id)hapticPlayer;
- (long long)retryCount;
- (id)viewController;
- (id)delegate;
- (void).cxx_destruct;
- (void)setHapticPlayer:;
- (double)currentTime;
- (void)resumeTimer;
- (id)session_id;
- (void)setSession_id:;
- (BOOL)isDebug;
- (long long)replayCount;
- (void)setReplayCount:;
- (void)setIsDebug:;
- (id)addCode:;
- (void)setCid:;
+ (id)shareProcessPool;
@end
