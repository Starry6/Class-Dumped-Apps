@interface AWEMissionDuetVideoPickerViewController : UIViewController
@property (nonatomic) NSArray duetAwemes;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIVisualEffectView blurEffectView;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel pageLabel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIButton shootButton;
@property (nonatomic) UIButton duetButton;
@property (nonatomic) AWEMissionDuetVideoPickerFlowLayout collectionViewLayout;
@property (nonatomic) Q selectedIndex;
@property (nonatomic) AWEStudioRepoMissionModel missionModel;
@property (nonatomic) Q startScrollIndex;
@property (nonatomic) NSDictionary argumentsDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWETaskModel mission;
@property (nonatomic) AWEChallengeModel challenge;
@property (nonatomic) NSDictionary studioInfo;
@property (nonatomic) @? didClickShootButton;
- (void)setDidClickShootButton:;
- (id)duetAwemes;
- (id)mission;
- (id)studioInfo;
- (id)didClickShootButton;
- (id)initWithMission:studioInfo:missionModel:;
- (id)initWithChallenge:studioInfo:;
- (id)initWithMission:studioInfo:missionModel:argumentsDict:;
- (id)shootButton;
- (void)closeButtonAction:;
- (void)setDuetAwemes:;
- (unsigned long long)startScrollIndex;
- (void)setStartScrollIndex:;
- (void)setShootButton:;
- (void)shootButtonAction:;
- (void)setDuetButton:;
- (id)duetButton;
- (void)duetButtonAction:;
- (void)playVideoAtIndex:;
- (void)startObservingApplicationStateChanges;
- (void)pauseVideoAtIndex:;
- (void)endObservingApplicationStateChanges;
- (id)missionModel;
- (id)backgroundImageViewForIndexPath:;
- (void)updatePageLabel;
- (void)updateSelectedIndex;
- (void)updateBackgroundViews;
- (void)stopVideoAtIndex:;
- (void)setMissionModel:;
- (id)argumentsDict;
- (void)setArgumentsDict:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (void)viewWillDisappear:;
- (id)collectionView;
- (void)setSelectedIndex:;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)viewDidLoad;
- (void)setBackgroundView:;
- (id)challenge;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (id)backgroundView;
- (void)collectionView:didEndDisplayingCell:forItemAtIndexPath:;
- (void)handleNotification:;
- (void)scrollViewDidScroll:;
- (unsigned long long)selectedIndex;
- (void)scrollViewWillBeginDragging:;
- (void)setTitleLabel:;
- (void)scrollViewDidEndDecelerating:;
- (id)collectionViewLayout;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)viewDidAppear:;
- (void)scrollViewDidEndScrollingAnimation:;
- (id)titleLabel;
- (void)setCollectionViewLayout:;
- (void)setCloseButton:;
- (id)closeButton;
- (id)blurEffectView;
- (void)setBlurEffectView:;
- (id)pageLabel;
- (void)setPageLabel:;
@end
