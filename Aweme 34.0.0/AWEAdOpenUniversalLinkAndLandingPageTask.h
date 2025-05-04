@interface AWEAdOpenUniversalLinkAndLandingPageTask : AWEAdBasicTask
@property (nonatomic) @? openOtherAppResult;
@property (nonatomic) BOOL disableTrackOpenUniversalLinkFailed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldBeExcuted;
- (void)taskWillExcute;
- (BOOL)taskExcute;
- (void)taskDidExcutedWithResult:;
- (void)asyncTaskExcute;
- (BOOL)isAsyncTask;
- (id)openOtherAppResult;
- (id)replaceBackURLWithCreativeID:groupID:logExtra:eventName:label:extra:disableTrack:extraRefer:openURL:;
- (void)monitorWebUrl:isSuccess:disableTrack:useAsUniversalLink:;
- (BOOL)disableTrackOpenUniversalLinkFailed;
- (void)setOpenOtherAppResult:;
- (void)setDisableTrackOpenUniversalLinkFailed:;
- (void).cxx_destruct;
+ (BOOL)isToAppStoreRequestURLStr:;
@end
