@interface AWEHalfPanelVideoNoteViewModel : NSObject
@property (nonatomic) q lastIdx;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWESearchHalfPanelInteractionProtocal> delegate;
@property (nonatomic) NSDictionary logParamDict;
@property (nonatomic) AWEAwemeModel model;
- (void)userDidPerformOperationOnPhotosPreviewViewController:;
- (void)photosPreviewViewControllerDidAppear:;
- (void)photosPreviewViewControllerWillDisappear:;
- (void)timeTagClickedWithTime:timeString:;
- (void)horizontalViewClickedWithImageArray:index:;
- (id)trackParamsWithButtonType:;
- (id)logParamDict;
- (void)trackWhenClickExit;
- (void)trackWhenClickHeader;
- (void)trackWhenSlideExit;
- (void)setLogParamDict:;
- (void)setLastIdx:;
- (long long)lastIdx;
- (void)setModel:;
- (id)delegate;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
